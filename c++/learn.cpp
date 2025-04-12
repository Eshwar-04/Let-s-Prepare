#include<bits/stdc++.h>	
using namespace std;
int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(-14);
	s.push(5);
	int sum=0;
	while(s.size()!=0){
		sum+=s.top();
		s.pop();
	}
	cout<<sum<<endl;
}

