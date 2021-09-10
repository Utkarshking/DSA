#include<bits/stdc++.h>
using namespace std;
int main()
{
int c=0;
int n;
vector<int> v;
vector<int>::iterator i;
vector<int>::iterator j;
int size;
cout<<"Enter the size of the array "<<endl;
cout<<endl;
cin>>size;	
cout<<"enter the elements in the array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>n;
v.push_back(n);	
}
for(i=v.begin();i!=v.end();i++)
{
cout<<*i<<" ";
}
cout<<endl;
cout<<"the duplicates are"<<endl;
for(i=v.begin();i!=v.end();i++)
for(j=i+1;j!=v.end();++j)
{
if(*i==*j)
cout<<*i<<" ";	
}
}
