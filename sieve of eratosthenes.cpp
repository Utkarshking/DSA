#include<bits/stdc++.h>
using namespace std;
bool * sieveoferatosthenes(int n)
{
int arr[n+1];
for(int i=0;i<=n+1;i++)
{
arr[i]=true;	
}
arr[0]=false;
arr[1]=false;	
for(int i=2;i*i<=n;i++)
{
for(int j=2*i;j<=n;j=j+i)
arr[j]=false;	
}
cout<<" "<<endl;
cout<<endl;
cout<<"the final array is "<<endl;
for(int i=0;i<=n+1;i++)
{
cout<<arr[i]<<endl;	
}
}
int main()
{sieveoferatosthenes(20);	
}

