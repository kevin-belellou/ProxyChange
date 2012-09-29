#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButtonQuitter_clicked();

    void on_pushButtonAppliquer_clicked();

    void on_radioButtonDesactiver_clicked();

    void on_radioButtonClous_clicked();

    void on_radioButtonFac_clicked();

private:
    Ui::MainWindow *ui;
    QString proxy;
};

#endif // MAINWINDOW_H
