#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
if(a>b)
{
return a;
}
return b;
}
int main()
{
int w=10;
int n=4;
int val[]={10,40,30,50};
int weight[]={5,4,6,3};
int mat[n+1][w+1];
//filling the base cases
for(int i=0;i<=w;i++) //initlaising the value with 0 because of with 0 weight 0 capacity
{
mat[0][i]=0;
}
for(int j=0;j<=n;j++)//initlaising the value with 0 because of with 0 weight 0 capacity
{
mat[j][0]=0;
}
//main logic
for(int item=1;item<=n;item++)
{
for(int capacity=1;capacity<=w;capacity++)
{
int valuewithout=mat[item-1][capacity+1]; //by default value
int currentvalue=0; //initialised with zero
int currentweight=weight[item];//to initilaise the value because to compare with the capacity

if(capacity>=currentweight) //this is mandatory condition to carry the item in the knapsack
{
currentvalue=val[item-1]; // If so, current value is at least the value of the current item
int remaining=capacity-currentweight;//to calculate the value to be added in the current value
currentvalue+=mat[item][remaining];//adding the value to the corresponding address and remaining address value
}
mat[item][capacity]=max(valuewithout,currentvalue);//calculating the maximum out of the previous value and current value
}
}
//displaying the final 2-D matrix after the main logic
for(int i=0;i<=n;i++)
{
for(int j=0;j<=w;j++)
{
cout<<mat[i][j]<<" "<<endl;
}
}
//return 0;
}
