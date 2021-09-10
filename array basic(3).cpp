//program to find the minimum and the maximum element in the array
#include<iostream>
using namespace std;
int main()
{
int max,min;
min=0;
max=0;
int k;
int h;
int a[10];
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
for(int i=0;i<size;i++)
{
cin>>a[i];	
}
for(int i=1;i<=size-1;++i)
{
if(a[min]<a[i])
{
k=a[min];
}
else
{
k=a[i];
min=i;	
}	
}
for(int i=1;i<size;i++)
{
if(a[max]>a[i])
{
h=a[max];	
}
else
{
h=a[i];
max=i;	
}	
}
cout<<"MIN: "<<k<<endl;
cout<<"MAX: "<<h<<endl;
}

