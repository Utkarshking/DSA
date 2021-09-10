//this process is based on the inter process communication
#include<iostream>
using namespace std;
void display(int a)
{cout<<"communicating the process "<<endl;
cout<<a<<" ";
cout<<endl;
}
void arithematic(int a,int b)
{
cout<<"adding both the numbers"<<endl;
int add;
add=a+b;
display(add);
int subtract;
cout<<"subtracting the numbers"<<endl;
subtract=a-b;
display(subtract);
cout<<"dividing the numbers"<<endl;
float divide;
cout<<"dividing the numbers"<<endl;
divide=a/b;
display(divide);
cout<<"multiplying the numbers"<<endl;
int multiply;
multiply=a*b;
display(multiply);
int rem;
cout<<"taking the remainder of the number"<<endl;
rem=a%b;
display(rem);
}
int main()
{
int a;
cout<<"Enter the value of a"<<endl;
cin>>a;
int b;
cout<<"enter the value of second variable"<<endl;
cin>>b;
arithematic(a,b);	
}
