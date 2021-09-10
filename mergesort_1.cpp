#include<iostream>
using namespace std;
int main()
{ int a,b;
int arr[10];
int l[10],r[10];
int size;
int c
int c=0;
cout<<"enter the size of the array"<<endl;
cin>>size;
for(int i=0;i<=size-1;i++)
cin>>arr[i];
for(int j=0;j<=size-1;++j)
cout<<arr[j]<<endl;
int mid;
int low=0;
int k=0;
int high=size-1;
mid=low+high/2;
int size_1=mid-low;
int size_2=high-mid+1;
cout<<size_1<<endl;
//cout<<"the size of the right subarray is "<<size_2<<endl;
for(int i=0;i<=size_1;i++)
cout<<arr[i]<<endl;
cout<<endl;
for(int i=size_2;i<=high;i++)
cout<<arr[i]<<endl;
cout<<endl;
cout<<"copying the elements in the left subarray"<<endl;
	while(low<=size_1)
	{
	l[low]=arr[low];
	low++;
	}
for(int i=0;i<=size_1;i++)	
cout<<l[i]<<endl;
cout<<"copying the elements in the right subarray"<<endl;
while(size_2<=high&&c<=size_2)
{
r[c]=arr[size_2];
size_2++;
c++;
}
while(a<=size_1&&b<=size_2)
if(l[a]<=r[b])
{
c[k]=l[a];
k++;
a++;
}
else
c[k]=

}
