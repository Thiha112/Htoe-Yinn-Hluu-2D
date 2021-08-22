#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"
#include "dialog.h"
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionAdmin_triggered();

public slots:
    void Timer();
    void timeout();


public:
    Ui::MainWindow *ui;
    QDialog* history;
    database mData;
    void load();
    QTimer* timer;
    QTimer m_timer;
    QTime m_started;
    QTime m_stopped;
    Dialog random;
    QString sign;
    QString sign1;
};
#endif // MAINWINDOW_H
