#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<int>st;
    for (int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="Dequeue"){
            if(st.size()==0){
                cout<<"Empty"<<endl;
            }else{
                cout<<st.front()<<endl;
                st.pop();
            }
        }else{
        	int t;
        	cin>>t;
            st.push(t);
        }
    }
}
