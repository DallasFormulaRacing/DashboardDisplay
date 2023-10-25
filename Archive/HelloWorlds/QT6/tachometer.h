#ifndef TACHOMETER_H
#define TACHOMETER_H

#include <QProgressBar>

class Tachometer : public QProgressBar
{
public:
    Tachometer(QWidget *parent = 0);
};

#endif // TACHOMETER_H
