#include "DiagMatrix.h"
DiagMatrix::DiagMatrix(int N):Matrix(N,N) {};
DiagMatrix::DiagMatrix(const initializer_list<double> l):DiagMatrix(l.size()) {
    int i=0;
    for(auto const& list: l) {
        set(list, i);
        i++;
    }
}
void DiagMatrix::random_fill(double min, double max) {
    for(int i= 0; i<_rows; i++) {
        set(min+(double)rand()/RAND_MAX*(max-min), i);
    }
}
void DiagMatrix::set(double num, int diag_c) {
    try {
        _data->at(diag_c)->at(diag_c)= num;
    } catch(out_of_range) {
        cerr<<"Set error\nIndex is out of range"<<endl;
        exit(-1);
    }
}
