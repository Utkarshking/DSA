#include<bits/stdc++.h>
using namespace std;
int find(char ch,int size,char x[])
{int c=0;
for(int i=0;i<=size-1;i++)
{
if(ch==x[i]){
    c++;
}
}
if(c>1){
    return 1;
	}
else 
return 0;
}
int main()
{ 
    
char ch;
int t=0;
string s;
int c=0;
int size;

cout<<"enter the size "<<endl;
cin>>size;

char x[size];

cout<<"enter the string"<<endl;
for(int i=0;i<=size-1;i++)
cin>>s[i];

for(int i=0;i<=size-1;i++)
{  
   ch = s[i];
   x[i] = s[i];
   
 

if(!find(ch,size,x)){

for(int j=0;j<=size-1;j++)
{
   if(ch==s[j])
   {
   	c++;
  
   }
}
cout<<ch<< " "<<c<<endl;
c=0;
}
}
}
