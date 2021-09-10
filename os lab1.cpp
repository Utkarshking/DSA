#include<iostream>
using namespace std;
int main()
{
int p_id={1,2,3,4};
int size=sizeof(p_id)/ sizeof(p_id[0]);
int burst={2,2,3,4};
at(processes,size,burst);
}
void at(int p_id[],int size,int burst[])
{
int wt[size],tat[size],total_wt=0,total_at=0;
findwt(p_id,size,bt,wt);
findtat(p_id,size,bt,wt,tat);
cout<<"process"<<"Burst Time"<<"Waiting Time"<<"Turn Around Time"<<endl;
for(int i=0;i<n;i++)
{
total_wt=total_wt+wt[size];
total_tat=total_tat+tat[size];
cout<<" "<<i+1<<"  "<<bt[i]<<"   "<<wt[i]<<"     "<<tat[i]<<endl;
}
cout << "Average waiting time = "  << (float)total_wt / (float)n; 
cout << "\nAverage turn around time = "  << (float)total_tat / (float)n; 
} 
void findtat(int p_id[],int size,int bt[],int wt[],int tat[])
{
for(int i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];	
}	
}
void findwt(int p_id[],int size,int bt,int wt[])
{
	wt[0]=0;
	for(int i=0;i<n;i++)
	wt[i]=bt[i-1]+wt[i-1];
	
}
