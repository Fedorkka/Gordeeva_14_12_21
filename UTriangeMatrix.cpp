#include "UTriangleMatrix.h"
UTriangleMatrix::UTriangleMatrix(int N):Matrix(N,N) {};
void UTriangleMatrix::random_fill(double min, double max) {
    for(int i= 0; i<_rows; i++) {
        for(int j= 0; j<_columns; j++) {
            if(i<=j) {
                set(min+(double)rand()/RAND_MAX*(max-min), i, j);
            }
        }
    }
}
void UTriangleMatrix::set(double num, int row, int column) {
    if(row>column) {
        cerr<<"Set error\nIndex is out of range"<<endl;
        exit(-1);
    }
    try {
        _data->at(row)->at(column)= num;
    } catch(out_of_range) {
        cerr<<"Set error\nIndex is out of range"<<endl;
        exit(-1);
    }
}
