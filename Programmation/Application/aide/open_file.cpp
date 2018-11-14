#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QStringList>
#include <QFile>
#include <iostream>
#include <feux.h>
#include <carrefour.h>
#include <vector>
#include "feux_pieton.h"
#include "feux_tricolore.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Simulation d'un carrefour");
    setFixedSize(800,800);
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(onFinTimer()));
    creerToolbar();
    temps_attente = 0;
    etape = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::convertir(int indice, QStringList list){
    bool conversion_ok;
    int coordonnee = list.at(indice).toInt(& conversion_ok);
    return coordonnee;

}
void MainWindow::creerToolbar(){
    style = QApplication::style();
    //Mise en place du bouton charger carrefour
    m_toolbar_bouton_charger_carrefour= new QPushButton();
    ui->mainToolBar->addWidget(m_toolbar_bouton_charger_carrefour);

    m_toolbar_bouton_charger_carrefour->setIcon(style->standardIcon( QStyle::SP_DialogOpenButton ));
    m_toolbar_bouton_charger_carrefour->setText("Charger un carrefour");
    connect( m_toolbar_bouton_charger_carrefour, SIGNAL(released()), this, SLOT(onOuvrirCarrefourClick()));

    //Mise en place du bouton simulation carrefour
    m_toolbar_bouton_simulation_carrefour = new QPushButton();
    ui->mainToolBar->addWidget(m_toolbar_bouton_simulation_carrefour);

    m_toolbar_bouton_simulation_carrefour->setIcon(style->standardIcon( QStyle::SP_MediaPlay ));
    m_toolbar_bouton_simulation_carrefour->setText("Lancer simulation du carrefour");
    connect(m_toolbar_bouton_simulation_carrefour, SIGNAL(released()), this, SLOT(onDemarrerSimulationClick()));
    m_toolbar_bouton_simulation_carrefour->setEnabled(false);

    //Mise en place du bouton stop
    m_toolbar_bouton_stop_carrefour = new QPushButton();
    ui->mainToolBar->addWidget(m_toolbar_bouton_stop_carrefour);

    m_toolbar_bouton_stop_carrefour->setIcon(style->standardIcon( QStyle::SP_MediaStop ));
    m_toolbar_bouton_stop_carrefour->setText("Arreter simulation");
    connect(m_toolbar_bouton_stop_carrefour, SIGNAL(released()), this, SLOT(onArreterSimulationClick()));
    m_toolbar_bouton_stop_carrefour->setEnabled(false);
}
void MainWindow::onOuvrirCarrefourClick(){
    ouvrirCarrefour();
    m_toolbar_bouton_charger_carrefour->setEnabled(false);
    m_toolbar_bouton_simulation_carrefour->setEnabled(true);
    m_toolbar_bouton_stop_carrefour->setEnabled(false);
}
void MainWindow::onArreterSimulationClick(){
    m_timer->stop();
    m_toolbar_bouton_stop_carrefour->setEnabled(false);
    m_toolbar_bouton_charger_carrefour->setEnabled(true);
    m_toolbar_bouton_simulation_carrefour->setEnabled(true);
}
void MainWindow::onDemarrerSimulationClick(){
    initialiser_variables();
    m_timer->start(1000);
    m_toolbar_bouton_simulation_carrefour->setEnabled(false);
    m_toolbar_bouton_stop_carrefour->setEnabled(true);
}
void MainWindow::executerSeconde(){
    if (temps_attente <= 0) {
        bool att = false;
            for(unsigned int j=etape; j<sequence.size() && !att; j++){
                etape = j+1;
                QString ligne = sequence.at(j);
                QStringList liste = ligne.split(" ");
                QString action = liste.at(1);
                if(action == "ATTENDRE"){
                    temps_attente = convertir(2,liste);
                    att = true;
                }else if(action == "SET"){
                    QString couleur = liste.at(3);
                    m_feux.at(convertir(2,liste)-1)->StateFeuxColor(couleur.toStdString());
                }
            }
        if (etape >= (int)sequence.size()) etape = 0;
    } else {
        temps_attente--;
    }
}
void MainWindow::initialiser_variables(){
    m_timer->stop();
    etape = 0;
    for(unsigned int i=0;i<m_feux.size();i++){
        QString color = couleur.at(i);
        m_feux.at(i)->StateFeuxColor(color.toStdString());
    }
}
void MainWindow::onFinTimer(){
    executerSeconde();
    update();
    m_timer->start(1000);
}

void MainWindow::repartir_instruction(){
    for(unsigned int i=0;i<instructions.size();i++){
        QString ligne = instructions.at(i);
        QStringList liste = ligne.split(" ");
        QString action = liste.at(0);
        if(action == "DECLARER")
            declarer(liste);
        if(action == "INSTRUCTION"){
            sequence.push_back(ligne);
        }
    }
}
int Carrefour::convertir(int indice, QStringList list){
    bool conversion_ok;
    int coordonnee = list.at(indice).toInt(& conversion_ok);
    return coordonnee;

}
void MainWindow::declarer(QStringList liste){
    QString type = liste.at(1);
    int x = convertir(2, liste);
    int y = convertir(3, liste);
    if(type == "FEU_TRICOLORE"){
        m_feux.push_back(new Feux_Tricolore("Eteint", x, y, this));
        couleur.push_back(liste.at(4));
    }else if(type == "FEU_PIETON"){
        m_feux.push_back(new Feux_Pieton("VERT", x, y, this));
        couleur.push_back(liste.at(4));
    }else if(type == "TRAIN"){

    }else{
        cout << "Problème dans la déclaration des feux, Vérifier !" << endl;
    }
}
void MainWindow::ouvrirCarrefour(){
    QString nom_fichier = QFileDialog::getOpenFileName( this, tr("Ouvrir un carrefour"), "mes_carrefours", tr("carrefour (*.car)"));
    if(nom_fichier.isEmpty()) return;

    QFile file(nom_fichier);

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(this, tr("Impossible d'ouvrir le fichier."), file.errorString());
    }else{
        for(unsigned int i=0;i<m_feux.size();i++){
            if(m_feux.at(i) != NULL){
                delete m_feux.at(i);
            }

         m_feux.clear();
        }

        instructions.clear();
        sequence.clear();

        cout << "Nom du fichier : " << nom_fichier.toStdString() << endl;
        QStringList li = nom_fichier.split("/");
        int taille = li.size();
        QString nom = li.at(taille-1);
        cout << nom.toStdString() << endl;
        if(nom == "carrefour3.car"){
            QFile File("stylesheet3.qss");
            File.open(QFile::ReadOnly);
            QString StyleSheet = QLatin1String(File.readAll());
            setStyleSheet(StyleSheet);
        }

        QTextStream flux(&file);

        QString ligne;

        while(!flux.atEnd()){
            ligne = flux.readLine();

            if(!ligne.startsWith("#")){
                instructions.push_back(ligne);
            }
        }
    }
    repartir_instruction();
}
