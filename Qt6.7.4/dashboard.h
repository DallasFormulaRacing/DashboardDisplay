#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dashboard;
}
QT_END_NAMESPACE

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    Dashboard(QWidget *parent = nullptr);
    ~Dashboard();
    void setValues(int,int,int,int);
    void setAllVisible(bool);

private:
    Ui::Dashboard *ui;
    void setup();
};
#endif // DASHBOARD_H
