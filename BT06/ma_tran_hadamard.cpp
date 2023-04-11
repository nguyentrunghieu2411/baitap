#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void hadamard(int n, vector<vector<char>>& matrix) {
    if (n == 1) {
        matrix = {{'o', 'o'}, {'o', '.'}};
        return;
    }

    int N = pow(2, n);
    vector<vector<char>> a;
    hadamard(n - 1, a);

    matrix.resize(N, vector<char>(N));

    // Gocs phần tư trên cùng bên trái
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            matrix[i][j] = a[i][j];
        }
    }

    // Góc phần tư trên cùng bên phải
    for (int i = 0; i < N / 2; i++) {
        for (int j = N / 2; j < N; j++) {
            matrix[i][j] = a[i][j - N / 2];
        }
    }

    // Góc phần tư phía dưới bên trái
    for (int i = N / 2; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            matrix[i][j] = a[i - N / 2][j];
        }
    }

    // Góc phần tư phía dưới bên phải
    for (int i = N / 2; i < N; i++) {
        for (int j = N / 2; j < N; j++) {
            matrix[i][j] = a[i - N / 2][j - N / 2] == 'o' ? '.' : 'o';
        }
    }
}

void print_matrix(vector<vector<char>>& matrix) {
    for (auto row : matrix) {
        for (auto elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    int n ;
    cin >> n;
    vector<vector<char>> matrix;
    hadamard(n, matrix);
    print_matrix(matrix);
    return 0;
}

