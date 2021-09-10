//starting with the c++ stl part
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/*void explainpair()
{
pair <int,int> p={1,3};
std::cout<<"the first element of the pair is "<<p.first<<std::endl;
std::cout<<"the second element of the pair is "<<p.second<<std::endl;
}*/
/*void explainvector()
{vector<int> v;
std::vector<int>::iterator it2;
int size;
int n=0;
cout<<"enter the size of the array"<<endl;
cin>>size;
int i=0;
while(i<=size-1)
{
cin>>n;
v.push_back(n);
i++;
}
bool element;
element=binary_search(v.begin(),v.end(),1); //false 
cout<<element<<endl;
std::cout<<"the element is present 1:true"<<std::endl;
std:cout<<"the element is not present 2:false"<<std::endl;
bool element_1;
cout<<binary_search(v.begin(),v.end(),100);//true
std::cout<<std::endl;
sort(v.begin(),v.end()); //sorts in ascending order
sort(v.begin(),v.end(),std::greater<int>()); //sorts according to descending order
for(int x:v) //x is the itertor which prints all the given values
{
cout<<x<<" ";
}
cout<<endl;
vector<int>::iterator t=lower_bound(v.begin(),v.end(),100);// returns the first index of the number the number must be (>=)
vector<int>::iterator t1=upper_bound(v.begin(),v.end(),100);//returns the index in which the number is (>)
vector<int> i2;
}*/
void explainset()
{
set<int>s;
s.insert(1);
s.insert(10);
s.insert(2);
s.insert(9);
s.insert(7);
for(int x:s)
{
cout<<x<<" ";
cout<<endl;
}
//prints 1,2,7,9,10	
auto it=s.find(10);
if(it==s.end())
{
cout<<"not present \n";	
}
else
{
cout<<"present \n"<<endl;	
}
cout<<" "<<*it;
cout<<endl;
set<int>::iterator it2=s.lower_bound(10);//returns the iterator which is >=
//auto it2=s.lower_bound(10);
//cout<<s.lower_bound(10);
cout<<*it2;
cout<<endl;
set<int>::iterator it3=s.upper_bound(10);//returns the iterator which is >(strictly greater)
bool present;
present=binary_search(s.begin(),s.end(),10);
if(present==1)
{
cout<<"present"<<endl;	
}
else
{
cout<<"not present "<<endl;	
}
}
int main()
{
//explainpair();	
//explainvector();
explainset();
}

