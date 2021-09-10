#include<iostream>
using namespace std;
int main()
{
int arr[10];
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
int l=0;
int h=size-1;
int leftsum,rightsum,sum;
int mid=l+h/2;
for(int i=0;i<=size-1;i++)
{
cin>>arr[i];
}
cout<<"the mid of the array is "<<mid<<endl;
int size_1=mid-l;
int size_2=h-mid;
cout<<"the left subarray is as follows"<<endl;
for(int i=0;i<=size_1;i++)
{
cout<<arr[i]<<endl;	
}
cout<<"the right subarray is as follows"<<endl;
for(int j=size_2;j<=size-1;++j)
{
cout<<arr[j]<<endl;
}
sum=mid;
for(int i=size_1;i>=l;--i)
{
if(arr[i]>0)
{
leftsum=a[i]+sum
if(sum>leftsum)	
}
}

}
