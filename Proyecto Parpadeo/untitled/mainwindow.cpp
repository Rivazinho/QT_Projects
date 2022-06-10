#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDateTime>
#include <QWidget>
#include <QLabel>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    // Constructor de la clase MainWindow.
    // Esta clase MainWindow es derivada de QMainWindow. Se llama al constructor de
    // QMainWindow parasándole por parámetro la misma información.
    // El puntero ui apunta a un nuevo objeto de esta clase MainWindow.
    ui->setupUi(this);
    // Método recibido mediante herencia de QMainWindow para inicializar los objetos de la interfaz
    // a partir de archivo mainwindow.ui
    lamparaGris = new QPixmap(":/imagenes/imagenGris");
    lamparaVerde = new QPixmap(":/imagenes/imagenVerde");
    // Crea objetos dinámicos para manejar las imágenes a partir de sus Alias indicados en
    // el archivo de recursos del proyecto
    QTimer* temporizador = new QTimer(this);
    // Crea un objeto para manejar un temporizador, cuyos eventos se van a tratar en esta clase
    connect(temporizador, SIGNAL(timeout()), this, SLOT(temporizadorTick()));
    // Hace que cada evento de temporización provoque la ejecución del método temprozadorTick()
    temporizador->start(1000);
    // Arranca el temporizador con un intervalo de 1000 ms
}
MainWindow::~MainWindow() { // Destructor
    delete ui; // Elimina el objeto de esta clase creado en el constructor
}
void MainWindow::temporizadorTick() {
    // Se ejecuta a cada temporización
    static bool encendida = false;
    // Buleano con clase de almacenamiento estática para que no sea una variable local,
    // si no una variable con una zona de almacenamiento estática. Se inicializa con
    // el valor false. Indica si hay que encender o apagar la lámpara.
    encendida = ! encendida; // Niega este buleano
    if (encendida) ui->etiquetaLampara->setPixmap(*lamparaVerde);
    else ui->etiquetaLampara->setPixmap(*lamparaGris);
    // Establece el pixmap en el QLabel en función del buleano
}
