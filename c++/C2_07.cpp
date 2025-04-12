#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int t;
    cin >> t;  
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":\n"; 
        long long int n;
        cin >> n;  
        stack<long long int> st, maxSt;  
        while (n--) {
            string a;
            cin >> a;  
            if (a == "A") {  
                long long int b;
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
                    cout << "Empty\n";
                } else {
                    cout << maxSt.top() << "\n";  
                }
            }
        }
    }

}

