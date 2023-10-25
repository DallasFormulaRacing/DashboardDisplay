#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Dashboard; }
QT_END_NAMESPACE

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:

    void on_engine_sliderMoved(int position);

    void on_tachometer_3_sliderMoved(int position);

    void on_lap_sliderMoved(int position);

    void on_temp_sliderMoved(int position);

    void on_all_sliderMoved(int position);

private:
    Ui::Dashboard *ui;
};
#endif // DASHBOARD_H
