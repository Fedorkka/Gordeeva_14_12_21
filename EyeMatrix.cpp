#include "EyeMatrix.h"
EyeMatrix::EyeMatrix(int N):Matrix(N,N) {
    for(int i= 0; i<N; i++) {
        set(1, i, i);
    }
}
