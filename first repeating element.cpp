#include<iostream>
using namespace std;
int main()
{
int arr[10];
int test;
cout<<"enter the no of test cases"<<endl;
cin>>test;
int size;
for(int i=1;i<=test;i++)
{
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<endl;
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>arr[i];	
}
for(int i=0;i<=size-1;i++)
for(int j=i+1;j<=size-1;j++)
{
if(arr[i]==arr[j])
{
cout<<i<<" ";
}
cout<<endl;
break;
}
}
}
