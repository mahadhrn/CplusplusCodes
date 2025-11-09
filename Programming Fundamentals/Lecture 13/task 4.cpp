// 2D-Array (SUM VALUES)

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize two 2x2 matrices
    int matrix1[2][2] = { {1, 2}, {3, 4} };
    int matrix2[2][2] = { {5, 6}, {7, 8} };
    int sum[2][2];

    // Calculate the sum of the matrices
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    cout << "Sum of the matrices:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
