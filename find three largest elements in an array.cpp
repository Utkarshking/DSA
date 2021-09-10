#include<iostream>
using namespace std;
int main()
{
int size;
int temp;
cout<<"Enter the size"<<endl;
cin>>size;
int arr[size];
cout<<endl;
cout<<"enter the elements "<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>arr[i];
}
int greatest=arr[0];
for(int i=0;i<=size-2;i++)
{
if(arr[i]>arr[i+1])	
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
greatest=arr[i+1];	
}
else
greatest=arr[i+1];
}
cout<<endl;
cout<<"greatest number is "<<greatest<<endl;
cout<<endl;
cout<<"the elements are"<<endl;
for(int i=0;i<=size-1;i++)
{
cout<<arr[i]<<endl;	
}
int j=size-1;
/*while(j!=size-3)
{
cout<<arr[j]<<endl;
j--;	
}*/

}
