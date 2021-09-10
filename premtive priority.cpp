#include<iostream>
using namespace std;
struct Process { 
int processid;
int bursttime;
int responsetime;
int priority;
int arrivaltime;
}process[10]; 
int main()
{
cout<<"taking the input of the following processes"<<endl;
cout<<"enter the number of processes"<<endl;
int processes;
cin>>processes;
cout<<"enter the processid for the following id"<<endl;
for(int i=0;i<=processes;++i)
cin>>process[i].processid;
cout<<"enter the burst time"<<endl;
for(int i=0;i<=processes;i++)
{
cin>>process[i].bursttime;	
}
cout<<"enter the response time"<<endl;
for(int i=0;i<=processes;++i)
{
cin>>process[i].processtime;	
}
//cout<<"enter the priority"<<endl;
}
