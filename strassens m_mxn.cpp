#include<iostream>
using namespace std;
void input(int m,int n)
{
cout<<"enter the elements of the first array"<<endl;
for(int i=0;i<=m;++i)
{
for(int j=0;j<=n;++j)
{
cin>>arr[i][j];	
}	
}
cout<<"enter the elements of the second array"<<endl;
for(int i=0;i<=m;++i)
{
for(int j=0;j<=n;++j)
{
cin>>arr2[i][j];
}
}
void strassens(int arr[3][3],int arr2[3][3],int arr3[3][3])
{
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
/*int choice(int m,int n)
{

}*/
int multiply(int m,int n)
{cout<<"enter the no of rows you wanted to calculate"<<endl;
cin>>m;
cout<<"enter the no of columns you wanted to calculate"<<endl;
cin>>n;
input(m,n); 
if(m==1&&n==1)
{
cout<<arr1[0]*arr2[0]<<endl;
return 0;	
}
else 
multiply(m/2,n/2);

}
	

