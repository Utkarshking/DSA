#include<iostream>
using namespace std;
bool findtwosum(int a[],int i,int x,int size)
{int j=size-1;
while(i<j)
{
if(a[i]+a[j]<x)
{
i++;
}
else if(a[i]+a[j]>x)
{
j--;	
}
else
{
return true;
}
}
return false;
}
void mergesort(int a[])
{ int g=0;
int m=0;
  int c[7];
  int size;
  cout<<"enter the size of the array"<<endl;
  cin>>size;
  int l=0;
  int h=size;
  int mid=l+h/2;
  for(int i=0;i<size;i++)
  cin>>a[i];
  int size_1=(mid-l)+1;
  int size_2=h-mid;
  cout<<"the elements of the complete array are as follows"<<endl;
  for(int i=0;i<size;i++)
  cout<<a[i]<<endl;
  cout<<"the elements in the left subarray are as follows"<<endl;
  for(int j=0;j<size_1;j++)
  cout<<a[j]<<endl;
  cout<<"the elements in the right subarray are as follows"<<endl;
  for(int j=size_2;j<size;j++)
  cout<<a[j]<<endl;
  int k=size_2;
while(g<size_1&&k<size)
{
	if(a[g]<=a[k])
	{ 
	c[m]=a[g];
	g++;
	}
	else
	{
	c[m]=a[k];
	k++;  
	}  
	m++;	
}
cout<<"displaying the sorted array"<<endl;  
for(int i=0;i<=size;i++)
{
cout<<c[i]<<endl;	
}
}
int main()
{int x;
int a[10];
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<"enter the number you wanted a subarray"<<endl;
cin>>x;
cout<<"enter the elements in the array"<<endl;
for(int j=0;j<=size;j++)
{
cin>>a[j];	
}
cout<<"before two pointer algo array is sorted"<<endl;
mergesort(a);
findtwosum(a,0,x,size);
}

  

