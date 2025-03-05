#include "dashboard.h"

#include <QThread>
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dashboard w;
    w.show();

    QThread::sleep(3);
    w.setAllVisible(true);

    int rpm = 1500, g = 0, temp = 100;
    bool reverse = false;
    while(true){
        if (reverse){
            rpm -= 10;
            if (rpm < 7500){
                if (g == 1){
                    reverse = false;
                    rpm += 10;
                } else {
                    rpm = 12500;
                    g--;
                }
            }
        }
        else{
            rpm += 10;
            if (rpm > 14250){
                if (g > 5){
                    reverse = true;
                } else {
                    g++;
                    rpm = 7500;
                }
            }
        }

        if (rpm % 3000 == 0){
            temp += rand()%2;
            if (temp > 200 || temp < 75) temp = 100;
            else {
                if (rand()%2 == 1){
                    temp -= rand()%3;
                } else {
                    temp += rand()%3;
                }
            }
        }

        w.setValues(rpm, g, temp, temp);
    }
    return a.exec();
}
