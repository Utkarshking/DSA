//bit stuffing program (D.C.N)
#include<iostream>
using namespace std;
int main()
{
int frames;
cout<<"enter the frames"<<endl;
cin>>frames;
int a[frames];
int b[frames];
cout<<"enter the frame data"<<endl;
for(int i=0;i<=frames-1;i++)
cin>>a[i];
//for counting the number of 1's
int count=0;
for(int i=0;i<=frames-1;i++)
{
if(a[i]==1)
{
count++;
b[i]=a[i];
if(count>5&&a[i]==1)
{
b[i]=0;
count=0;
frames++;
}
}
else if(a[i]==0)
{
b[i]=a[i];	
count=0;
}	
}
cout<<" "<<endl;
cout<<"after byte stuffing"<<endl;
for(int i=0;i<=frames-1;i++)
cout<<b[i]<<" ";
}
