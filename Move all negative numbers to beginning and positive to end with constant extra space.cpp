#include<bits/stdc++.h>
using namespace std;
int main()
{int size;
cout<<"enter the size"<<endl;
cin>>size;
int arr[size];	
cout<<"Enter the elements"<<endl;
for(int i=0;i<=size-1;i++)
cin>>arr[i];
cout<<endl;
for(int i=0;i<=size-1;i++)
cout<<arr[i]<<" ";
int j=0;
for(int i=0;i<=size-1;i++)
{
if(arr[i]<0)	
{
if(i!=j)
swap(arr[i],arr[j]);	
j++;
}
}
cout<<endl;
cout<<"after processing"<<endl;
for(int i=0;i<=size-1;i++)
cout<<arr[i]<<" ";
}	

	
