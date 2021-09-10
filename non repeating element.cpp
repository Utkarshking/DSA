#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
int n;
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<endl;
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>n;
v.push_back(n);
}
sort(v.begin(),v.end());  //sorted in O(nlogn) using quick sort algorithm
cout<<endl;
cout<<" ";
for(vector<int>::iterator i=v.begin();i!=v.end();i++)
{
cout<<*(i)<<endl;
}
vector<int>::iterator i;
while(i!=v.end())
{
if(*i!=*i+1)
cout<<*i<<endl;	
i=i+2;
}
}

