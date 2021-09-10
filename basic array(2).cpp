#include<iostream>
using namespace std;
int main()
{
int size,n,a[10];
cout<<"enter the element you have to find"<<endl;
cin>>n;
cout<<"enter the size of the array"<<endl;
cin>>size;
for(int i=0;i<=size;i++)
{
cin>>a[i];	
}
for(int i=0;i<=size;i++)
{
if(a[i]==n)
{
cout<<"true"<<endl;
}	
}	
}
