# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'mainwindow.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(459, 550)
        self.ApplicationGlobale = QtWidgets.QWidget(MainWindow)
        self.ApplicationGlobale.setObjectName("ApplicationGlobale")
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.ApplicationGlobale)
        self.verticalLayout_2.setContentsMargins(11, 11, 11, 11)
        self.verticalLayout_2.setSpacing(6)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.ZoneLabel = QtWidgets.QWidget(self.ApplicationGlobale)
        self.ZoneLabel.setObjectName("ZoneLabel")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.ZoneLabel)
        self.horizontalLayout.setContentsMargins(11, 11, 11, 11)
        self.horizontalLayout.setSpacing(6)
        self.horizontalLayout.setObjectName("horizontalLayout")
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem)
        self.label_bienvenue = QtWidgets.QLabel(self.ZoneLabel)
        self.label_bienvenue.setObjectName("label_bienvenue")
        self.horizontalLayout.addWidget(self.label_bienvenue)
        spacerItem1 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem1)
        self.verticalLayout_2.addWidget(self.ZoneLabel)
        self.ZoneComboBox = QtWidgets.QWidget(self.ApplicationGlobale)
        self.ZoneComboBox.setObjectName("ZoneComboBox")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.ZoneComboBox)
        self.horizontalLayout_2.setContentsMargins(11, 11, 11, 11)
        self.horizontalLayout_2.setSpacing(6)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        spacerItem2 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem2)
        self.comboBox_com = QtWidgets.QComboBox(self.ZoneComboBox)
        self.comboBox_com.setObjectName("comboBox_com")
        self.horizontalLayout_2.addWidget(self.comboBox_com)
        spacerItem3 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem3)
        self.verticalLayout_2.addWidget(self.ZoneComboBox)
        self.ZoneBouton = QtWidgets.QWidget(self.ApplicationGlobale)
        self.ZoneBouton.setObjectName("ZoneBouton")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.ZoneBouton)
        self.horizontalLayout_3.setContentsMargins(11, 11, 11, 11)
        self.horizontalLayout_3.setSpacing(6)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        spacerItem4 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_3.addItem(spacerItem4)
        self.button_start = QtWidgets.QPushButton(self.ZoneBouton)
        self.button_start.setEnabled(True)
        self.button_start.setObjectName("button_start")
        self.horizontalLayout_3.addWidget(self.button_start)
        spacerItem5 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_3.addItem(spacerItem5)
        self.verticalLayout_2.addWidget(self.ZoneBouton)
        MainWindow.setCentralWidget(self.ApplicationGlobale)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.label_bienvenue.setText(_translate("MainWindow", "Bienvenue sur l\'application QUIZZ"))
        self.button_start.setText(_translate("MainWindow", "Start"))

