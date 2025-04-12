#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":" << endl;
        long long int c;
        cin >> c;
        stack<int> st, maxSt; 
        while (c--) {
            string a;
            cin >> a;

            if (a == "A") {
                int b;
                cin >> b;
                st.push(b);
                if (maxSt.empty()) {
                    maxSt.push(b);
                } else {
                    maxSt.push(max(b, maxSt.top()));
                }
            } 
            else if (a == "R") {
                if (!st.empty()) {
                    st.pop();
                    maxSt.pop();
                }
            } 
            else { 
                if (st.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << maxSt.top() << endl; 
                }
            }
        }
    }

    return 0;
}

