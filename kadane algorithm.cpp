#include<bits/stdc++.h>
using namespace std;
int main()
{ int sum=0;
int size;
cout<<"enter the size"<<endl;
cin>>size;
cout<<endl;
int a[size];
cout<<"Enter the elements of the array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>a[i];
}
int max=a[0];
cout<<endl;
cout<<" ";
/*for(int i=0;i<=size;i++)
{
cout<<a[i];	
}*/
for(int i=0;i<=size-1;i++)
{
sum+=a[i];
if(sum<0)
{
sum=0;	
}	
if(sum>max)
{
max=sum;	
}
}
cout<<"the maximum sum is :"<<max<<endl;	
}
