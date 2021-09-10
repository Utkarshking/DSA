#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{int p;
cout<<"enter the modulo number"<<endl;
cin>>p;
if(n==0)
return 1; 
else if(n==1)
return a;	
else
{
//int r=power(a,n/2);
if(n%2==0)
return (power(a,n/2)%p*power(a,n/2)%p)%p; 
else
return (power(a,n/2)%p*power(a,n/2)%p*a)%p;	
}	
}
int main()
{
cout<<"the fast exponentiation problem"<<endl;
cout<<endl;
int a,b;
cout<<"in  the exponentiation of a^b"<<endl;
cout<<endl;
cout<<"enter the value of base :a "<<a<<endl;
cin>>a;
cout<<"enter the value of power :b "<<b<<endl;	
cin>>b;
cout<<power(a,b);
}
