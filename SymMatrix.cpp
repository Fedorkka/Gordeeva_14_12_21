#include "SymMatrix.h"
SymMatrix::SymMatrix(int N): Matrix(N, N) {};
void SymMatrix::random_fill(double min, double max) {
    Matrix temp(_rows, _rows);
    temp.random_fill(0, 1);
    temp= (temp*temp.T()*(max-min))/_rows+min;
    copy(temp);
}
