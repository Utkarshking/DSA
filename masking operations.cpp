#include<bits/stdc++.h>
using namespace std;
//this will take the position at which the bit is to be located and the number
//int getbit(int pos,int number)
//{
//int mask;
//mask=1<<pos;
//if(number&&mask!=0)
//return 1;
//else
//return 0;
//}
int getbit (int pos,int number)
{
return(number>>pos)&1;
}
//this function will take postion and number as argument sets bits at the given position
int setbit(int pos,int number)
{

	
}
int main()
{
int n;
cout<<"Enter the number"<<endl;
cin>>n;
cout<<endl;
cout<<"Enter the postion at which the bit is to found"<<endl;
int pos;
cin>>pos;
cout<<" " <<getbit(pos,n);
}
