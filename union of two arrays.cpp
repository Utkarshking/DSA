#include<bits/stdc++.h>
using namespace std;
int main()
{int g=0;
int h=0;
int arr[10],arr_1[10];
int size,size_1;
int c=0;
cout<<"enter the number of test cases you want"<<endl;
cout<<"enter the number of test cases you want"<<endl;
int test;
cout<<endl;
cin>>test;
for(int i=1;i<=test;i++)
{
cout<<"enter the size of the first array"<<endl;
cin>>size;
cout<<"enter the size of the second array"<<endl;
cin>>size_1;
cout<<"Enter the elements of the first array"<<endl;
for(int k=0;k<=size-1;++k)
{
cin>>arr[k];	
}
cout<<"enter the elements of the second array"<<endl;
for(int j=0;j<=size_1-1;++j)
{
cin>>arr_1[j];	
}
while(h!=size&&g!=size_1)
{
if(arr[h]>arr_1[g])
{
c++;
}
else if(arr[h]<arr_1[g])
{
c++;	
}
else
c++;
h++;
g++;
	
}
cout<<"<-----counter value---->:"<<c<<endl;
}
while(g<size)
{
c++;
g++;	
}
while(h<size_1)
{
h++;
c++;	
}
cout<<"counter value is "<<c<<endl;

/*cout<<"displaying the first elements of the array"<<endl;
for(int i=0;i<=size;i++)
{
cout<<arr[i];	
}
cout<<"displaying the second elements of the array"<<endl;
for(int j=0;j<=size_1-1;j++)
{
cout<<arr_1[j];	
}*/	
}
