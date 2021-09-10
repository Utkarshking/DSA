//this program is used for the round robin scheduling which is premptive method of scheduling the processes
#include<bits/stdc++.h>
using namespace std;
//below function is used to calculate the waiting time of the processes entered by the user
void findwaitingtime(int processes[],int n,int bt[],int wt[],int quantum)
{
//this array has been made to make an entry in the remaining burst time	
int remain_bt[n];
//calculating the remaining burst time for every processes
for(int i=0;i<=n-1;i++)
{
	remain_bt[i]=bt[i];

	}
//variable to calculate the current time 		
int t=0;
while(1)
{ //bool variable is being defined is being initialised as the process is being done ie. terminated
bool done=true;
//traversing
for(int i=0;i<n;i++)
{
//the below condition works till all the processes are being done 	
if(remain_bt[i]>0)
{
done=false;
if(remain_bt[i]>quantum)
{    //increasing the value of the current time with the time quantum
	t+=quantum;
	//as the process proceedes decrease the value of remain burst time with time quantum
   remain_bt[i]-=quantum;
	}
else
{
t=t+remain_bt[i];
wt[i]=t-bt[i];
remain_bt[i]=0;
}		
}
}
if(done==true)
{
break;	
}	
}
}
//below function is used to calculate the turn around time for every process
void findturnaroundtime(int processes[],int size,int bt[],int wt[],int tat[])
{
for(int i=0;i<=size-1;i++)
{
tat[i]=wt[i]+bt[i];	
	}	
}
void findavgtime(int processes[],int size,int bt[],int quantum)
{
	int wt[size],tat[size],total_wt=0,total_tat=0;
	findwaitingtime(processes,size,bt,wt,quantum);
	findturnaroundtime(processes,size,bt,wt,tat);
	//cout<<"process"<<" burst time "<<" waiting time "<<" turn around time \n"<<endl;
for (int i=0; i<size; i++) 
{ 
total_wt = total_wt + wt[i]; 
total_tat = total_tat + tat[i]; 
cout<<" "<<i+1<< endl;
cout<<bt[i]<<"\t ";
cout<< wt[i] << endl;
cout << tat[i] <<endl; 
} 
cout<<"average waiting time ="<<(float)total_wt/(float)size;
cout<<endl;
cout<<"average turn around time ="<<(float)total_tat/(float)size;
cout<<endl;
}

int main()
{
//enter the size of the array	
int size;
cout<<"enter the size"<<endl;
cin>>size;
//process array for the no of the processes
int processes[size];
//this is the array for entry of the burst time
int burst_time[size];
cout<<endl;
cout<<"enter the value of time quantum"<<endl;
//this quantum variable is made for the time quantum	
int quantum;
cin>>quantum;
//now entering the process one by one from the user
cout<<"enter the processes"<<endl;
cout<<endl;
for(int i=0;i<=size-1;++i)
{
cin>>processes[i];	
}
//similarly entering the burst time entered by the user
cout<<"enter the burst time"<<endl;
cout<<endl;
for(int j=0;j<=size-1;j++)
{
cin>>burst_time[j];	
} 
//now  calling the waiting time to calculate wt 
findavgtime(processes,size,burst_time,quantum);
return 0;
}
