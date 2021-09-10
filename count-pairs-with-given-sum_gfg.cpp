#include<bits/stdc++.h>
using namespace std;
int main()
{ int l=0;
int c=0;
int arr[10];
int size;
int num;
cout<<"enter the size of the array"<<endl;
cin>>size;
int h=size-1;
cout<<endl;
int i=0,j=i+1;
cout<<"enter the elements of the array"<<endl;
for(int j=0;j<=size-1;j++)
{
cin>>arr[j];	
}
cout<<endl;
cout<<"enter the number"<<endl;
cin>>num;
while(i!=size-1||j!=size)
{
if(arr[i]+arr[j]==num)
c++;
i++;
j++;	
}
cout<<endl;
cout<<"the number of pairs are :"<<c<<endl;
}
