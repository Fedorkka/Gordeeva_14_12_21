#include <iostream>
#include "Matrix.h"
#include "EyeMatrix.h"
#include "DiagMatrix.h"
#include "DTriangleMatrix.h"
#include "UTriangleMatrix.h"
#include "SymMatrix.h"
using namespace std;

int main() {
    srand(time(nullptr));
    cout<<"\tMatrix test\n";
    cout<<"Definition way 1\nA=\n";
    Matrix A{{3, 2, 1},{5, 4, 2},{3, 5, 1}};
    cout<<A;
    cout<<"Definition way 2, random fill test, range[10, 15]\nB=\n";
    Matrix B(3, 3);
    B.random_fill(10, 15);
    cout<<B;
    cout<<"Vectors a and b\n";
    Matrix a{{1,4,5}};
    Matrix b(3, 1);
    b.random_fill(1, 5);
    cout<<a<<b;
    cout<<"Set test B(set 5 to element{1, 2})\n";
    B.set(5, 1, 2);
    cout<<B;
    cout<<"Get test A(get element{2, 1})\n";
    cout<<A.get(2,1)<<"\n\n";
    cout<<"Operators test\n";
    cout<<"A+B=\n";
    cout<<A+B;
    cout<<"A-B=\n";
    cout<<A-B;
    cout<<"A*5=\n";
    cout<<A*5;
    cout<<"A*B=\n";
    cout<<A*B;
    cout<<"A.*B=\n";
    cout<<A.admult(B);
    cout<<"transposed A=\n";
    cout<<A.T();
    cout<<"det A=\n";
    cout<<A.det()<<"\n\n";
    cout<<"norm A=\n";
    cout<<A.norm()<<"\n\n";
    cout<<"rang A=\n";
    cout<<A.rang()<<"\n\n";
    cout<<"A^-1=\n";
    cout<<A.inv();
    cout<<"a dot b=\n";
    cout<<a.dot(b)<<"\n\n";
    cout<<"norm a=\n";
    cout<<a.norm()<<"\n\n";
    cout<<"max b=\n";
    cout<<b.max()<<"\n\n";
    cout<<"\tEyeMatrix test\n";
    EyeMatrix e(5);
    cout<<e;
    cout<<"\tDiagMatrix test\nrandom fill test, range [1.5, 2.5]\n";
    DiagMatrix d(3);
    d.random_fill(1.5, 2.5);
    cout<<d;
    cout<<"\tDTriangleMatrix test\nrandom fill test, range [2, 5]\n";
    DTriangleMatrix dt(3);
    dt.random_fill(2, 5);
    cout<<dt;
    cout<<"\tUTriangleMatrix test\nrandom fill test, range [2, 5]\n";
    UTriangleMatrix ut(3);
    ut.random_fill(2, 5);
    cout<<ut;
    cout<<"\tSymMatrix test\nrandom fill test, range [10, 100]\n";
    SymMatrix s(4);
    s.random_fill(10, 100);
    cout<<s;
    Matrix r;
    Matrix w;
    ifstream in("mat.txt");
    ofstream out("res.txt");
    ifstream inb("mat.bin", ios::binary);
    ofstream outb("res.bin", ios::binary);
    cout<<"\tFile work test\n\tText file test\nRead test\n";
    w<<in;
    cout<<w;
    w= w*3;
    cout<<"Write test\n";
    w>>out;
    cout<<"Complited!\n";
    cout<<"\tBinary file test\nRead test\n";
    r.get_bin(inb);
    cout<<r;
    cout<<"Write test\n";
    w.write_bin(outb);
    cout<<"Complited!\n";


}
