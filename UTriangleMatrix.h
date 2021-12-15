#ifndef UDIAG_H_INCLUDED
#define UDIAG_H_INCLUDED
#include "Matrix.h"
class UTriangleMatrix:public Matrix {
public:
    UTriangleMatrix(int N);
    void random_fill(double min, double max);
    void set(double num, int row, int column);
private:
    using Matrix::T;
};



#endif // UDIAG_H_INCLUDED
