#include "matrix.h"

//ctor
Matrix::Matrix(int n_in, int m_in): n{n_in}, m{m_in} {
    array.resize(n, std::vector<double>(m, 0));
}

Matrix Matrix::operator+(Matrix other) const{
    if(n != other.n || m != other.m){
        throw TypeMismatchException{};
    }
    Matrix res{n,m};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            res.array[i][j] = array[i][j] + other.array[i][j];
        }
    }
    return res;
}

const double Matrix::getElem(int i, int j) const{
    return array[i][j];
}
double Matrix::getElem(int i, int j){
    return array[i][j];
}