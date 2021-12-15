#ifndef DDIAG_H_INCLUDED
#define DDIAG_H_INCLUDED
#include "Matrix.h"
class DTriangleMatrix:public Matrix {
public:
    DTriangleMatrix(int N);
    void random_fill(double min, double max);
    void set(double num, int row, int column);
private:
    using Matrix::T;
};


#endif // DDIAG_H_INCLUDED
