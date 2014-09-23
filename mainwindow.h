#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QGenericMatrix>
#include <string>       // std::string
#include <iostream>     // std::cout


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    /**
      * we use this slot to trigger our widget's redraw function
      * with the timer
      */
    void drawOpenGL();
    void animate();
    void pushMatrix();
    
private:
    Ui::MainWindow *ui;

    QTimer * animationTimer;        /**< this is the only member so far added to the auto-generated mainwindow class. We use the timer for regular OpenGL redraws. */
    bool animateon;
    void printMatrices();


};

#endif // MAINWINDOW_H
