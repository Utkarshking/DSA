#include<bits/stdc++.h>
using namespace std;
pair<int,int>p;
int main()
{
//pair<int,int> p;
cout<<"enter the value of a"<<endl;
cin>>p.first;
cout<<"enter the value of b"<<endl;
cin>>p.second;
//cout<<power(p);	
//return p.first*p.second; 
int s;
cout<<"enter the modulo number"<<endl;
cin>>s;
//int k=p.second;
if(p.second==0)
return 1;
else if(p.second==1)
return p.first;	

else
{
if(p.second%2==0)
return (power(p.first,p.second/2)%s*power(p.first,p.second/2)%s)%s;	
else
return (power(p.first,p.second/2)%s*power(p.first,p.second/2)%s*p.first)%s;	

}
