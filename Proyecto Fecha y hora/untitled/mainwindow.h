#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QTimer *pTemporizador; // Puntero a un objeto para manejo de un temporizador
private slots:
    void temporizacion(); // Método que atiende a las temporizaciones
};
#endif // MAINWINDOW_H
