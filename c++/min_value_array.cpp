#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int lowest = INT_MAX;
	int index = -1;
	for(int i=0;i<n;i++)
	{
		if(a[i]<lowest)
		{
			lowest=a[i];
			index=i;
		}
	}
	cout<<"lowest number"<<lowest<<"index"<<index<<endl;
}
