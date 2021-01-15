#ifndef STATISTIC_H
#define STATISTIC_H

#include "algorithm.h"
#include "vardefs.h"
class statistic : public algorithm
{
public:
    statistic();
    QString checkImage(QImage* image);
};

#endif // STATISTIC_H
