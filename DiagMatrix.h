#ifndef DIAGMATIRX_H_INCLUDED
#define DIAGMATIRX_H_INCLUDED
#include "Matrix.h"
class DiagMatrix:public Matrix {
public:
    DiagMatrix(int N);
    void random_fill(double min, double max);
    void set(double num, int diag_c);
    DiagMatrix(const initializer_list<double>);
private:
    using Matrix::T;
};

#endif // DIAGMATIRX_H_INCLUDED
