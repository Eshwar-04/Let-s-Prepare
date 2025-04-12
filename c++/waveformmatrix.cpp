#include <bits/stdc++.h>
using namespace std;

void wave(vector<vector<int>> &a, int row, int col) {
    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < row; i++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int i = row - 1; i >= 0; i--) {  
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int row, col;
    cin >> row >> col;  

    vector<vector<int>> a(row, vector<int>(col));
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }

    wave(a, row, col);  

    return 0;
}
