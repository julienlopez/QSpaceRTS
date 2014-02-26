#include "mainwindow.hpp"
#include "screen.hpp"
#include "galaxyscene.hpp"

MainWindow::MainWindow(QWidget* p): QMainWindow(p)
{
    auto* screen = new Screen(new GalaxyScene);
    setCentralWidget(screen);
    setMinimumSize(800, 600);
}

MainWindow::~MainWindow()
{

}
