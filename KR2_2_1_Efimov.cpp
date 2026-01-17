#include <iostream>
#include <cmath>
using namespace std;


double** matrice_A(int size) {
    double** matrix = new double* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new double[size];
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand();
        }
    }
    return matrix;
}

double* zero_vector(int size) {
    double* vector = new double[size];
    for (int i = 0; i < size; i++) {
        vector[i] = 0;
    }
    return vector;
}

void print_matrice_A(double** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void print_vector(double* vector, int size) {
    for (int i = 0; i < size; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

double b_i(double* row, int i) {
    double sum = 0;
    for (int j = 0; j <= i; j++) {
        sum += row[j];
    }
    return sum;
}

void fill_vecB(double** matrix, double* vector, int size) {
    for (int i = 0; i < size; i++) {
        vector[i] = b_i(matrix[i], i);
    }
}

double square_sum(int n) {
    if (n == 1) {
        return sqrt(n + 1);
    }
    else {
        return sqrt(n + 1) + square_sum(n - 1);
    }
}

int main() {
    int size = 20;
    double** A = matrice_A(size);
    double* B = zero_vector(size);
    print_matrice_A(A, size);
    fill_vecB(A, B, size);
    cout << endl;
    cout << "vector B : ";
    print_vector(B, size);
    return 0;
}