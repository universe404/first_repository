#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <QImage>
class algorithm {
    public:
        virtual QString checkImage(QImage*)=0;
    virtual ~algorithm(){};
};
#endif // ALGORITHM_H
