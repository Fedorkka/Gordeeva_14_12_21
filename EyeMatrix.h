#ifndef EYEMATRIX_H_INCLUDED
#define EYEMATRIX_H_INCLUDED
#include "Matrix.h"
class EyeMatrix:public Matrix {
public:
    EyeMatrix(int N);
private:
    using Matrix::random_fill;
    using Matrix::T;
    using Matrix::set;
};


#endif // EYEMATRIX_H_INCLUDED
