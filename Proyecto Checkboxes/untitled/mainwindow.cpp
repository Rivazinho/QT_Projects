#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    // Lee el archivo que describe la interfaz y crea los punteros check1, check2 y
    // etiquetaSeleccionada para manejar los QCheckBox y el QLabel
    connect(ui->check1, SIGNAL(clicked()), this, SLOT(checkClick()));
    connect(ui->check2, SIGNAL(clicked()), this, SLOT(checkClick()));
    // Hace que el click de ratón sobre cualquiera de los QCheckBox provoque la
    // ejecución del método checkClick()
}
MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::checkClick() {
    // Se ejecuta cada vez que se hace click de ratón sobre un QCheckBox
    QString resultado = "Seleccionada: ";
    // Clase para manejar cadenas de caracteres codificadas en Unicode.
    // Crea un objeto asignándole un valor inicial.
    if (ui->check1->isChecked())
        resultado += "1 ";
    if (ui->check2->isChecked())
        resultado += "2";
    // En el caso de que algún QCheckBox esté seleccionado, modifica el
    // texto de la cadena
    if (resultado == "Seleccionada: ")
        resultado = "Seleccionada: ninguna";
    // Si no se ha modificado el texto, indica que no se selección ninguna opción
    ui->etiquetaSeleccion->setText(resultado.trimmed());
    // Establece el texto que se muestra en el QLabel, eliminando antes
    // espacios al principio y al final
}
