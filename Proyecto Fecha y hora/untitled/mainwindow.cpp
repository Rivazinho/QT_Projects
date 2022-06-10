#include <QTimer> // Para la clase QTimer
#include <QDateTime> // Para la clase QDateTime
#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this); // Crea objetos a partir de mainwindow.ui
    pTemporizador = new QTimer(this); // Crea un objeto para manejar el temporizador
    QObject::connect(pTemporizador, SIGNAL(timeout()), this, SLOT(temporizacion()));
    // Establece que en cada temporización se realice una llamada al método temporizacion()
    pTemporizador->start(1000);
    // Arranca el temporizador con un período de 1 segundo
}
MainWindow::~MainWindow() {
    delete ui;
}
void MainWindow::temporizacion() {
    // Se ejecuta a cada temporización
    QDateTime ahora = QDateTime::currentDateTime(); // Obtiene el instante actual
    QString cadena = ahora.toString("dd/MM/yyyy hh:mm:ss");
    // Representa en una cadena el día/mes/año hora:minuto:segundo
    ui->etiqueta->setText(cadena); // Muestra la cadena en la etiqueta
}
