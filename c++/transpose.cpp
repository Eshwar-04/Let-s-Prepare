#include <bits/stdc++.h>
using namespace std;
void printtrans(vector<vector<int>> &a, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[j][i] << " ";
        }
        cout << "\n";
    }
}
}
void brute(vector<vector<int>> &a, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++) {  
            a[i][j] = a[i][j] ^ a[j][i];
            a[j][i] = a[i][j] ^ a[j][i];
            a[i][j] = a[i][j] ^ a[j][i];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
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

    brute(a, row, col);
    printtrans(a,row,col);
    return 0;
}
