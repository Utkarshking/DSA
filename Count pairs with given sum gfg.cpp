#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int c=0;
int arr[10];
int size;
int num;
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<endl;
cout<<"enter the elements of the array"<<endl;
for(int j=0;j<=size-1;j++)
{
cin>>arr[j];	
}
cout<<endl;
cout<<"enter the number"<<endl;
cin>>num;
for(int i=0;i<=size-1;i++)
{
for(int j=i+1;j<=size-1;j++)	
if(arr[i]+arr[j]==num)
{
c++;
}	
}
cout<<"the number of pairs are"<<c<<endl;	
}

