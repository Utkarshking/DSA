#include<bits/stdc++.h>
using namespace std;
//this program is used to to exchange the values ...according to the principle of call by reference
void swap(int *x, int *y)
{ //t variable is used to exchange the values 
 int t=*y;
	*y=*x;
	*x=t;
}
int main()
{   //declared for storing the process for further ..user entry
int process[10];
//declare for storing the starting time for further...user entry
int starting_time[10];
//declare for storing the finish time for further.....user entry
int burst_time[10];
//declared the variable size for the user entry through the process
//displaying the msg on the screen
cout<<"Enter the size"<<endl;
int size;
//entered the value of size by the user through the console
cin>>size;
cout<<endl;
//for loop is used to access each element for the process,finish and starting time by the user entry
for(int i=0;i<=size-1;i++)
{ //diplays the msg on the console/screen for the user convinience
cout<<"enter the process"<<endl;
//entering the process id by the user through the console
cin>>process[i];
//displays the msg on the screen
cout<<"enter the starting time of the process"<<endl;
//entering the following starting time of the process 
cin>>starting_time[i];
cout<<"Enter the finish time of the process"<<endl;
//entering the following finish time of the process
cin>>burst_time[i];
}
//displating all the information given by user
for(int i=0;i<=size-1;i++)
{//displaying the process id
cout<<process[i]<<endl;
//displaying the starting time of the process
cout<<starting_time[i]<<endl;
//displaying the finish time of the process
cout<<burst_time[i]<<endl;
}
//applying the bubble sort algorithm
for(int i=0;i<size-1;i++)
{
for(int j=0;j<size-i-1;j++)
{//in this algorithm the process and starting time will adjust according to the burst time
if(burst_time[j]>burst_time[j+1])
{
swap(&burst_time[j],&burst_time[j+1]);
swap(&process[j],&process[j+1]);
swap(&starting_time[j],&starting_time[j+1]);
}
}
}
//printf("\nProcesstime\t\t start Time\t\t finish Time");
//displaying all the details of the process after the sorting
cout<<endl;
for(int i=0;i<=size-1;i++)
{//displaying the process id
cout<<process[i]<<endl;
//displaying the starting time 
cout<<starting_time[i]<<endl;
//displaying the finish time
cout<<burst_time[i]<<endl;
}
return 0;
}
