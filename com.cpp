#include<bits/stdc++.h>
using namespace std;
int main()
{ int k=0;
int size_1,size_2,size_3;
vector<int>v1,v2,v3;
int n;
int m=0; //counter variable 
cout<<"Enter the size of the first array"<<endl;
cin>>size_1;
cout<<"enter the size of the second array"<<endl;
cin>>size_2;
cout<<"enter the size of the third array"<<endl;
cin>>size_3;
cout<<"enter the elements of the first array"<<endl;
cout<<endl;
for(int i=0;i<=size_1-1;i++)
{
cin>>n;
v1.push_back(n);
}
cout<<endl;
cout<<"Enter the elements of the second array"<<endl;
for(int j=0;j<=size_2-1;j++)
{
cin>>n;
v2.push_back(n);	
}
cout<<endl;
cout<<"enter the elements of the third array"<<endl;
for(int k=0;k<=size_3-1;k++)
{
cin>>n;
v3.push_back(n);	
}
vector<int>::iterator i;
vector<int>::iterator j;
cout<<endl;
vector<int> v4;
int size_4=size_1+size_2+size_3;
for(i=v1.begin();i!=v1.end();i++)
{
v4.push_back(*i);	
}
for(i=v2.begin();i!=v2.end();i++)
{
v4.push_back(*i);	
}
for(vector<int>::iterator i=v3.begin();i!=v3.end();i++)
{
v4.push_back(*i);	
}
sort(v4.begin(),v4.end());
//for(vector<int>::iterator j=v4.begin();j!=v4.end();j++)
//cout<<(*j)<<" ";
cout<<endl;
for(i=v4.begin();i!=v4.end();i++)
for(j=i+1;j!=v4.end();++j)
{ 
if(*i==*j)
{ 
cout<<(*i)<<endl;
}
}
}
//while(i!=v1.end()?j!=v2.end():k!=v3.end())
/*while(j!=v2.end())
{
if(*i==*j&&*j==*k&&*k==*i)
{
cout<<*(j)<<endl;
}
i++;
j++;
k++;
}*/


