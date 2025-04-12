#include <iostream>
#include <vector>
using namespace std;
//brute force method it has two steps first transpose then change or upside down the columns
void rotateMatrix(vector<vector<int>> &mat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for (int colIdx = 0; colIdx < col; colIdx++) {
        int i = 0, j = row - 1;
        while (i < j) {
            int temp = mat[i][colIdx];
            mat[i][colIdx] = mat[j][colIdx];
            mat[j][colIdx] = temp;
            i++;
            j--;
        }
    }
}

//optimized method for rotating a matrix 90degrees anti clock wise
void optimized(vector<vector<int>> &mat, int row, int col){

    int n = mat.size();
    for (int i = 0; i < n / 2; i++) {  
        for (int j = i; j < n - i - 1; j++) {  
            // Swapping elements in a cyclic order  
            int temp = mat[i][j];  
            mat[i][j] = mat[j][n - i - 1];  
            mat[j][n - i - 1] = mat[n - i - 1][n - j - 1];  
            mat[n - i - 1][n - j - 1] = mat[n - j - 1][i];  
            mat[n - j - 1][i] = temp;  
        }  
    }
    
}

void printMatrix(const vector<vector<int>> &mat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, col;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(mat, row, col);

    optimized(mat, row, col);

    cout << "Matrix after 90-degree Anti-clockwise Rotation:" << endl;
    printMatrix(mat, row, col);

    return 0;
}


