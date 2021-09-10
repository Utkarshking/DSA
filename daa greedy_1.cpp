#include<iostream>
using namespace std;
void swap(int *xp, int *yp)  
{  
int temp = *xp;  
*xp = *yp;  
*yp = temp;  
} 
int main()
{int g,l;
int c=1;//counter variable 
int  name[5]; //process array
int st[5]; //starting time
int ft[5]; //finish time
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<"enter the serial no of the process array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>name[i];	
}
cout<<"enter the following starting time of the processes"<<endl;
for(int j=0;j<=size-1;++j)
{
cin>>st[j];
}
cout<<"enter the finish time of the process"<<endl;
for(int k=0;k<=size-1;++k)
{
cin>>ft[k];	
}
for(g=0;g<size-1;g++)
{
for(l=0;l<size-g-1;++l)
if(ft[l]>ft[l+1])
{
swap(&ft[l],&ft[l+1]);
swap(&st[l],&st[l+1]);
swap(&name[l],&name[l+1]);
}
}
cout<<"the following process"<<endl;
for(int i=0;i<=size-1;i++)
{
cout<<name[i]<<endl;	
}
cout<<"the following starting time"<<endl;
for(int j=0;j<=size-1;++j)
{
cout<<st[j]<<endl;
}
cout<<"the following finish time"<<endl;
for(int k=0;k<=size-1;++k)
{
cout<<ft[k]<<endl;	
}
int f=ft[1];
for(int i=1;i<=size-1;i++)
{
if(st[i]>=f)
{
c++;
f=ft[i];
}
cout<<"the value of c is "<<endl;	
}
}
