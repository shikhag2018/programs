#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    int x=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{ int count=1;
		for(int j=1;j<=i;j++)
		{   
		    if((i%2)==0)
		    { 
		    cout<<(x+i)-count;
		    count+=2;
			}
			else
			{
			cout<<x;
	     	}
			if(j<i)
			{
				cout<<"*";
				
			}
			x++;
		} 

		cout<<"\n";
	}
	
	
}
