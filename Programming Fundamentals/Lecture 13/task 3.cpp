// 2D-Array Concept

#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 Tic-Tac-Toe board
    int board[3][3];

    // Initialize all elements to -1
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = -1;
        }
    }

    // Display the board
    cout << "Tic-Tac-Toe Board Initialized with -1:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
