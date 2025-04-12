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
	
	
	
	for(int i=0;i<n;i++)
	{
		int lowest = i;
		for(int j=0;i<n;j++)
			{
			
					if(a[j]<lowest)
					{
						lowest=j;
					}
			}
		swap(a[i],a[lowest]);
	}

for(int i=0;i<n;i++)
	cout<<a[i];
}
