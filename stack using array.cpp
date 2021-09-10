#include<iostream>
using namespace std;
int top=-1,stack[10],i,j,size=5;
void push(int n)
{
if(top==size)
{
cout<<"stack overflow"<<endl;	
}	
else
{
top++;
stack[top]=n;	
}
}
void pop()
{
if(top<=-1)
{
cout<<"stack underflow"<<endl;
}
else
{
cout<<"the element will be popped out is "<<stack[top]<<endl;
top--;	
}	
}
void traverse()
{ 
if(top>=0)
{
cout<<"the elements of the array are"<<endl;	
for(i=top;i>=0;i--)
{
cout<<stack[i];
cout<<endl;
}
}
else
{
cout<<"stack is empty";	
}
}
int main() {
   int ch,n;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>n;`
            push(n);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            traverse();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
  }while(ch!=4);
  return 0;
}
