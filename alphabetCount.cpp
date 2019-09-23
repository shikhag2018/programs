#include<bits/stdc++.h>
using namespace std;
int main()
{  string s;
cin>>s;
int count=1;
char prev=s[0];
int n=s.length();
for(int i=1;i<=n;i++)
{
	if(prev==s[i])
	{
		count++;
	}
	else
	{
	  cout<<s[i-1]<<count;
	  count=1;
	  prev=s[i];	
	}	
	
}
	
	return 0;
}
