#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the values of matrix size: ";
    cin >> n;

    int First[n][n], Second[n][n], product[n][n] = {0};

    cout << "Enter First matrix Elements of 2D-array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> First[i][j];
        }
    }

    cout << "Enter Second matrix Elements of 2D-array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Second[i][j];
        }
    }

    // Corrected Matrix Multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            product[i][j] = 0; // Initialize before summing
            for (int k = 0; k < n; k++) {
                product[i][j] += First[i][k] * Second[k][j];
            }
        }
    }

    cout << "Product of Matrix Values:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

