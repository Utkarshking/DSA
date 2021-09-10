#include<bits/stdc++.h>
using namespace std;
int main()
{int temp;
int size;
cout<<"Enter the size of the array"<<endl;
cin>>size;
int a[size];
cout<<endl;
cout<<"Enter the elements of the array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>a[i];	
}
cout<<endl;
for(int i=0;i<=size-1;i++)
{
if(a[i]>0&&a[i+1]>0)
{
for(int j=i;j<=size-1;j++)
{
if(a[j]<0)
{
temp=a[i+1];
a[i+1]=a[j];
a[j]=temp;	
}
}	
}
else if(a[i]<0&&a[i+1]<0)	
{
for(int j=i;j<=size-1;j++)
{
if(a[j]>0)
{
temp=a[i+1];
a[i+1]=a[j];
a[j]=temp;
}	
}	
}
}
cout<<"the elements are"<<endl;
for(int j=0;j<=size-1;j++)
{
cout<<a[j]<<" ";	
}
}
