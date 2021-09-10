#include<bits/stdc++.h>
using namespace std;
/*int main()
{
int size;
cout<<"Enter the size of the array"<<endl;
cin>>size;
int a[size];
bool found=false;
cout<<"Enter the elements of the array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>a[i];	
}
int sum=0;
for(int i=0;i<=size-1;i++)
for(int j=i;j<=size-1;j++)
{
sum+=a[j];
if(sum==0)
{
found=true;
break;
}
if(found)
break;
}		
}*/
//this below code changes the time complexity from o(n^2) to O(n)
int findzerosum(int a[],int size)
{
unordered_set<int> s;
int sum=0;
for(int i=0;i<=size-1;i++)
{
sum+=a[i];
if(sum==0||s.find(sum)!=s.end())
{
return true;	
s.insert(sum);
}
else
return false;	
}
}
int main()
{  int size;
	cout<<"Enter the size"<<endl;
	cin >>size;
	int a[size];
	cout<<endl;
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<=size-1;i++)
	{
	cin>>a[i];	
	}
    if(findzerosum(a,size))
    {
    cout<<"there is a zero sum present"<<endl;	
	}
	else
	{
	cout<<"there is no sum present"<<endl;
	}
}
