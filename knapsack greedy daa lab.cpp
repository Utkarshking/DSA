//knapsack problem with greedy approach
#include<bits/stdc++.h>
using namespace std;
//int fractionalknapsack(int ,int);
//defined the structure knapsack for the data accumulation
//for the data abstraction
struct knapsack
{//the process id
int pid;
//profit for the item
int profit;
//weight of the item
int weight;	
//p/w ratio
int ratio;
}knapsack[10];
//function to make the swapping to affect the whole program...using principle of call by reference
void swap(int *a,int *b)
{//temp variable is made to exchange the two values of the variables
int temp=*a;
*a=*b;
*b=temp;	
}
int fractionalknapsack(int process,int w)
{
int item[10];
//initialising all the items as 0
for(int i=0;i<=process-1;i++)
{
item[i]=0;	
}
//diplaying the weight variable to be 0 for further calculations
int weight=0;
int i=0;
cout<<endl;
while(i!=process)
{
if(weight+knapsack[i].weight<=w)
{
item[i]=1;
weight=weight+knapsack[i].weight;
}
else
{
item[i]=(w-weight)/knapsack[i].weight;
weight=w;
break;	
}
return item[i];
}
}

//main function
int main()
{ //declared the variable w for the total weight of the sack 
int w;
cout<<"enter the value of maximum weight"<<endl; 
cin>>w;
//declared to store the process
int process;
cout<<"enter the no of processes"<<endl;
cin>>process;
cout<<endl;
//displays the msg on the screen
cout<<"enter the profit"<<endl;
for(int i=0;i<=process-1;i++)
{//enters the knapsack profit through the for loop
cin>>knapsack[i].profit;	
}
//displays the msg on the scren for entering the process id
cout<<"enter the pid"<<endl;
for(int j=0;j<=process-1;++j)
{ //entering the process id through the for loop
cin>>knapsack[j].pid;
}
cout<<endl;
//displays the msg on the screen for entering the weight of the item
cout<<"enter the weights"<<endl;
for(int i=0;i<=process-1;i++)
{//entering the weight of the item through the console using for loop
cin>>knapsack[i].weight;	
}
cout<<endl;
cout<<"now calculating the ratio"<<endl;
for(int j=0;j<=process-1;++j)
{//now we are calculating p/w ratio to see the profit of every product/item
knapsack[j].ratio=knapsack[j].profit/knapsack[j].weight;	
}
//now implementing bubble sort according to ratio
for(int i=0;i<process-1;i++)
for(int j=0;j<process-i-1;j++)
{//sorting the details of the knapsack ....according to the ratio
if(knapsack[j].ratio>knapsack[j+1].ratio)
{//swapping the details and calling the function
swap(&knapsack[j].pid,&knapsack[j+1].pid);
swap(&knapsack[j].weight,&knapsack[j+1].weight);
swap(&knapsack[j].profit,&knapsack[j+1].profit);	
}
}
//after sorting displaying the details of the knapsack
cout<<endl;
cout<<"after sorting"<<endl;
cout<<"displaying the pid"<<endl;
for(int i=0;i<=process-1;++i)
{
cout<<knapsack[i].pid<<endl;	
}
cout<<"displaying the weight"<<endl;
for(int i=0;i<=process-1;i++)
{
cout<<knapsack[i].weight<<endl;	
}
cout<<endl;
cout<<"displaying the profit"<<endl;
for(int i=0;i<=process-1;i++)
{
cout<<knapsack[i].profit<<endl;	
}
cout<<fractionalknapsack(process,w); //function calling
}


