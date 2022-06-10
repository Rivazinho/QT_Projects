#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
namespace Ui {
class MainWindow;
}
// Indica que la clase MainWindow se define dentro del espacio de nombres Ui
class MainWindow : public QMainWindow {
    // Declaración de la clase MainWindow, que es derivada de la clase QMainWindow
    Q_OBJECT
    // Macro para introducir miembros privados en esta clase
public:
    explicit MainWindow(QWidget *parent = nullptr);
    // Constructor. Recibe como parámetro un puntero al widget contenedor. Normalmente,
    // para esta clase se indica nullptr ya que la ventana no está dentro de otro widget.
    ~MainWindow(); // Destructor
public slots:
    // Así se indica que a continuación se van a declarar los métodos que
    // va a atender a eventos en la aplicación
    void temporizadorTick();
    // Método que atiende a eventos producidos por un temporizador
private:
    Ui::MainWindow *ui; // Puntero a un objeto de esta clase
    QPixmap * lamparaGris, * lamparaVerde; // Punteros a objetos para manejar imágenes
};
#endif
