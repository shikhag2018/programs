#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
	int list[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>list[i];
	}
	for(int i=0;i<n;i++)
	{
		int x=list[i];
		b[x]=i;
	
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}


}
