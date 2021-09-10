#include<bits/stdc++.h>
using namespace std;
//this function is based on the principle of call by reference
void swap(int *xp, int *yp)  
{  
int temp = *xp;  
*xp = *yp;  
*yp = temp;  
} 
int main()
{ //taken some of the extra variables for further processing
int g,l;
//counter variable 
int c=1;
//process array
int  name[5]; 
//starting time
int st[5]; 
//finish time
int ft[5]; 
//declared to take the user input for the size of the array
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
//ENTER THE NUMBER OF THE PROCESS THROUGH THE CONSOLE BY THE USER
cout<<"enter the serial no of the process array"<<endl;
for(int i=0;i<=size-1;i++)
{
cin>>name[i];	
}
//STARTING TIME ENTRY BY THE USER
cout<<"enter the following starting time of the processes"<<endl;
for(int j=0;j<=size-1;++j)
{
cin>>st[j];
}
cout<<"enter the finish time of the process"<<endl;
//FINISH TIME ENTRY BY THE USER
for(int k=0;k<=size-1;++k)
{
cin>>ft[k];	
}
//bubble sorting
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
//after sorting displaying the process names
cout<<"the following process"<<endl;
for(int i=0;i<=size-1;i++)
{
cout<<name[i]<<endl;	
}
//after sorting displaying the process starting time
cout<<"the following starting time"<<endl;
for(int j=0;j<=size-1;++j)
{
cout<<st[j]<<endl;
}
//after soting displaying the process finish time 
cout<<"the following finish time"<<endl;
for(int k=0;k<=size-1;++k)
{
cout<<ft[k]<<endl;	
}
//afccording to the algorithm taking the finish time(least) of a process in variable 
int f=ft[0];
//declaring the for loop for accessing all the elements of the process
for(int i=1;i<=size-1;i++)
{//according to the algorithm we suppose to find the maximum process that can be exicuted
//we suppose the staring time from the second process starting process must be greater than the finish time of the first process 
if(st[i]>=f)
{//count value will be increased to count the maximum  process that can be exicuted
c++;
//finish time will be changes according to the loop and conditions changes
f=ft[i];
}
}
//displaying the maximum process that can be exicuted ....
cout<<"the value of c is "<<c<<endl;
}
