#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
int ch;
cout<<"1. Addition"<<endl;
cout<<"2. substraction"<<endl;
cout<<"3. quotient"<<endl;
cout<<"4. remainder"<<endl;
cout<<"enter the choice "<<endl;
cin>>ch;
switch(ch)
{
case 1: {
	    cout<<"the addition of a and b is"<<endl;
        cout<<a+b<<endl;
        break;
    }
case 2: {
        cout<<"the substraction of a and b is"<<endl;
        cout<<a-b<<endl;
        break;
    }
case 3: {
        cout<<"the multiplication of a and b is "<<endl;
        cout<<a*b<<endl;
        break;
    }
case 4: {
	    cout<<"the quotient of a and b is "<<endl;
        cout<<a/b<<endl;
        break;
    }
case 5: {
        cout<<"the remainder of a and b is "<<endl;
        cout<<a%b<<endl;
		break;
	}
default: {
            cout<<"Invalid Choice"<<endl;
         }
}
}
