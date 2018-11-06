# -*- coding: utf-8 -*-

from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QMainWindow
from main import Ui_MainWindow
import sys


if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())


"""com_list = serial.tools.list_ports.comports()
        self.comboBox_com.addItem("Choisissez une arduino")
        for com in com_list:
            self.comboBox_com.addItem(com.name)"""