#include<iostream>
using namespace std;
int main()
{
int a[10];
int size;
cout<<"enter the size"<<endl;
cin>>size;
for(int i=0;i<=size-1;++i)
{
cin>>a[i];	
}
for(int j=size-1;j>=0;j--)
{
cout<<a[j]<<" ";	
}	
}
