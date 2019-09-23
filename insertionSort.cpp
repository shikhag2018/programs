#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp	;
}
void InsertionSort(int arr[],int n)
{
for(int i=1;i<=n-1;i++)
{
   int hole=i;
   while((arr[hole-1]>arr[hole])&&hole>0)
   {
   	swap(&arr[hole-1],&arr[hole]);
   	hole=hole-1;
   }

}
}
void print(int arr[],int n)
{	
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}
int main()
{   
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	InsertionSort( arr,n);
	print(arr,n);
	return 0;
}
