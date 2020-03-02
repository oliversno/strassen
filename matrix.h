#ifndef MATRIX_H
#define MATRIX_H

#include<vector>

class Matrix{
    private:
    int n;
    int m;
    std::vector<std::vector<double>> array; // nxm matrix
    //ctor
    Matrix(int n_in, int m_in);

    Matrix operator+(Matrix) const;
    const double getElem(int i, int j) const;
    double getElem(int i, int j);

};

#endif