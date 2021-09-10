#include<bits/stdc++.h>
using  namespace std;
int main()
{
vector<int> v;
/*v.push_back(2);
v.push_back(2);
v.push_back(2);
v.push_back(2);
v.push_back(4);*/
int i;
int mid;
int l=0;
int h=v.size()-1;
//cout<<"enter the index you wanted to delete "<<endl;
cin>>i;
for(int j=0;j<v.size();j++)
cin>>v[j];
v.erase(v.begin()+(i-1));
cout<<"the following list is as follows"<<endl;
/*for(vector<int>::iterator i=v.begin();i!=v.end();i++)
{
cout<<*(i)<<endl;
}*/
//v.erase(v.begin());
for(int i=0;i<v.size();i++)
cout<<v[i];
mid=l+h/2;
int sum_1=0;
int sum_2=0;
for(int i=0;i<=mid;i++)
sum_1+=v[i];
for(int i=mid+1;i<=v.size();i++)
sum_2+=v[i];
if(sum_1==sum_2)
cout<<"yeah"<<endl;
else
cout<<"no equal sum subarray"<<endl;
}
