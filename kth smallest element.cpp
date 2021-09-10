#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;	
}
int main()
{ int k;
int temp;
int size;
cout<<"enter the size"<<endl;
cin>>size;
int arr[size];
cout<<endl;
cout<<"enter the elements"<<endl;
for(int i=0;i<=size-1;i++)
cin>>arr[i];
cout<<"enter the kth element :"<<endl;
cin>>k;	
if(k>size)
cout<<"not possible "<<endl;
else
{
for(int i=0;i<size-1;i++)
for(int j=0;j<size-i-1;j++)
{
if(arr[j]>arr[j+1])
swap(&arr[j],&arr[j+1]);
}
cout<<"the "<<k<<" smallest element is : "<<arr[k-1]<<endl;
}
}
