#include<iostream>
using namespace std;
int main()
{ int i,j;
char str1[10]; //1st string initialisation
char str2[20]; //2nd string initialisation
cout<<"enter the string 1"<<endl;
for( i=0;i<5;i++) //entering the value in the 1st string
{
cin>>str1[i];
}
cout<<"enter the string 2"<<endl;	
for(j=0;j<3;j++) //entering the values in the 2nd string
{
cin>>str2[j];
}
// the two loops are used to search the common substring and returns its index
for(i=0;i<5;i++) 
{
for(j=0;j<3;j++)
{
if(str2[j]==str1[i]){
cout<<"substring matched"<<endl;
cout<<"the starting index is "<<i<<endl;
}
break;
}	
}
}
