#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{ 
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
	return true;
}
else
return false;		
}
int main()
{
 string s;int k=0;
 cin>>s;
 int n=s.length();
 char a[n];
 for(int i=0;i<n;i++)
 {
int x=isVowel(s[i]);
if(x==false)
{
	cout<<s[i];
} 
 }	

 return 0;
}
