#include<bits/stdc++.h>
using namespace std;
int main()
{//simple matrix multiplication will be there 1st matrix
int arr[3][3];
//second matrix this is to multiplied with the first one
int arr2[3][3];
//the result will be store in the first one
int arr3[3][3];
//i have taken as the matrix 2x2
cout<<"enter the elements of the first array"<<endl;
//nested for loops are required to enter the elements of first matrix
for(int i=0;i<=1;++i)
{
for(int j=0;j<=1;++j)
{
cin>>arr[i][j];	
}	
}
//here also the nested loops are required to enter the values of the second matrix
cout<<"enter the elements of the second array"<<endl;
for(int i=0;i<=1;++i)
{
for(int j=0;j<=1;++j)
{
cin>>arr2[i][j];
}	
}
//for the substraction and addtion in strassens we used to keep the values of a,b,c,d..etc in a variable
int a=arr[0][0];
int b=arr[0][1];
int c=arr[1][0];
int d=arr[1][1];
int e=arr2[0][0];
int f=arr2[0][1];
int g=arr2[1][0];
int h=arr2[1][1];
int p1=a*f-h;
int p2=a+b*h;
int p3=c+d*e;
int p4=d*g-e;
int p5=a+d*e+h;
int p6=b-d*g+h;
int p7=a-c*e+f;
arr3[0][0]=p5+p4-p2+p6;
arr3[0][1]=p1+p2;
arr3[1][0]=p3+p4;
arr3[1][1]=p1+p5-p3-p7;
cout<<"the matrix multiplication is as follows"<<endl;
for(int i=0;i<=1;i++)
{
for(int j=0;j<=1;j++)
{
cout<<arr3[i][j]<<endl;
	
}	
}
}
