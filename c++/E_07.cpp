#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  
    while (n--) {
        string s;
        cin >> s;  
        stack<char> st;
        bool balanced = true;  
        for (int i = 0; i < s.size(); i++) {
            
            
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                st.push(s[i]);  
            } else {
                if (st.empty()) {
                    balanced = false;  
                    break;
                }
                
                char top = st.top();
                if ((s[i] == '}' && top == '{') || (s[i] == ']' && top == '[') || (s[i] == ')' && top == '(')) {
                    st.pop();  
                } else {
                    balanced = false;  
                    break;
                }
            }
        }
        
        if (balanced && st.empty()) {
            cout << "YES" << endl;  
        } else {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}

