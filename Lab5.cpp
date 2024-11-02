#include <iostream>
#include <Windows.h>
using namespace std;

const int n = 5;

void multiply(int matrix1[n][n], int matrix2[n][n], int result[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void print(int matrix[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введіть матрицю 1 розмірністю 5 на 5: " << endl;
    int matrix1[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Введіть матрицю 2 розмірністю 5 на 5: " << endl;
    int matrix2[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix2[i][j];
        }
    }

    int result[n][n];
    multiply(matrix1, matrix2, result);

    cout << "Результат множення:" << endl;
    print(result);

    return 0;
}
