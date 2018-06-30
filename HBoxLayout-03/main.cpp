#include "widget.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    QWidget* window = new QWidget;
    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
    QPushButton *button4 = new QPushButton("Four");
    QPushButton *button5 = new QPushButton("Five");
    QHBoxLayout *layout = new QHBoxLayout;

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(button5);
    layout->addStretch();  // 添加伸缩   最后一个控件之后添加缩放，所有控件居左显示

    window->setLayout(layout);
    window->show();

    return a.exec();
}
