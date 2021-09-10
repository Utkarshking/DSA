#include<bits/stdc++.h>
using namespace std;
int main()
{int arr[10];
int size;
int test;
int temp;
cout<<"enter the number of test cases"<<endl;
cin>>test;
for(int i=1;i<=test;++i)
{
cout<<"enter the size of the array"<<endl;
cin>>size;	
for(int i=0;i<=size-1;++i)
cin>>arr[i];
temp=arr[size-1];
for(int j=size-2;j>=0;j--)
{
arr[j+1]=arr[j];	
}
arr[0]=temp;
cout<<endl;
cout<<" ";
cout<<"the cyclic  array is :- "<<endl;
for(int i=0;i<=size-1;i++)
{
cout<<arr[i]<<endl;	
}
}

}
