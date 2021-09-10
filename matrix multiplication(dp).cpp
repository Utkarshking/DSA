#include<iostream>
using namespace std;
int matrixchainmultplication(int arr[],int i,int j)
{ 
//the same value of i and j will return 0
if(i==j)
return 0;
int k;
//the minimum value is set to infinity
int minimum=INT_MAX; 
//variable count is to count the no of multplications required to multiply two matrices
int count;
for(int k=i;k<j;k++)
{
	
}	
}
int main()
{int size;
cout<<"enter the size "<<endl;
cin>>size;
int arr[size];
cout<<endl;
cout<<"enter the elements "<<endl;
for(int i=0;i<=size-1;i++)
cin>>arr[i];
matrixchainmultiplication(arr,1,size-1)	
}
