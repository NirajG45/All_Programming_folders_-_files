// makeing 3d array in c++.
#include <iostream>
using namespace std;

int main() {  
    int Number[2][2][2], sum = 0, i, j, k;

    cout << "Enter the 3d array values: " << endl;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                cin >> Number[i][j][k];
            }
        }
    }

    // Showing the 3d array values:

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                cout << Number[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                sum += Number[i][j][k];
            }
        }
    }

    cout << "Sum of all 3d array values: " << sum << endl;

    return 0;
    }