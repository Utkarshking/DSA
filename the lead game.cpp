#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[],int arr_1[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] < arr[j+1])
{
swap(&arr[j], &arr[j+1]);
swap(&arr_1[j],&arr_1[j+1]);
}
}
int main()
{ int n;
//cout<<"enter the size"<<endl;
cin>>n;
int  lead[n];
int  t[n];
int player[n];
int player_1[n];
//cout<<endl;
//cout<<"enter the values"<<endl;
for(int i=0;i<n;i++)
cin>>player[i]>>player_1[i];
for(int i=1;i<n;i++)
{
player[i]=player[i]+player[i-1];
player_1[i]=player_1[i]+player_1[i-1];
}
for(int i=0;i<n;i++)
{
if(player[i]>player_1[i])
{
lead[i]=player[i]-player_1[i];
t[i]=1;
}
else if(player_1[i]>player[i])
{
lead[i]=player_1[i]-player[i];
t[i]=2;
}
else
continue;
}
bubbleSort(lead,t,n);
//display(lead,t,n);
cout<<t[0]<<" "<<lead[0];
}
