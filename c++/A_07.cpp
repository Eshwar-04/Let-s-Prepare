#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>st;
    for (int i=0;i<n;i++){
        string a="	";
        cin>>a;
        if(a=="pop"){
            if(st.size()==0){
                cout<<"Empty"<<endl;
            }else{
                cout<<st.top()<<endl;
                st.pop();
            }
        }else{
        	int t;
        	cin>>t;
            st.push(t);
        }
    }
}
