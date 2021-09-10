#include<bits/stdc++.h>
using namespace std;
int main()
{ int k=0;
int arr[10];
int a=1;
int test;
int size;
cout<<"enter the number of test cases"<<endl;
cin>>test;
for(int i=1;i<=test;i++)	
{
cout<<"enter the size of the  array"<<endl;
cin>>size;
cout<<endl;
cout<<"enter the elements of the array"<<endl;
for(int j=0;j<=size-1-1;++j)
{
cin>>arr[j];	
}
while(k!=size-1)
{
if(arr[k]!=a)
cout<<"the missing number is :"<<a<<endl;
a++;
k++;
}
}
}
