#include<iostream>
using namespace std;
int main()
{
int c=0;
int n;
int a[10];
int size;
cout<<"enter the number"<<endl;
cin>>n;
cout<<"enter the size of array"<<endl;
cin>>size;
for(int i=0;i<=size-1;i++)
cin>>a[i];
for(int i=0;i<=size-1;i++)
{
if(a[i]==n)
{
c++;
}	
}
cout<<"the number is : "<<n<<" the number of occurance is "<<c<<endl;
}
