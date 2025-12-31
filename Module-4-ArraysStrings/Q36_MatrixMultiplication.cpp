#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int mat1[10][10], mat2[10][10], result[10][10] = {0};

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    
    cout << "Resultant matrix:" << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

