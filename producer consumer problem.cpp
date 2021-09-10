#include<iostream>
using namespace std;
int mutex=1;
int full=0;
int empty=3;
int x=0;
int wait(int s)
{
s=s-1;
return s;	
}
int signal(int s)
{
s=s+1;
return s;	
}
void producer()
{ 
//produce in item
empty=wait(empty);
mutex=wait(mutex);
//place in buffer
x++;	
mutex=signal(mutex);
full=signal(full);
}
void consumer()
{
full=wait(full);
mutex=wait(mutex);
mutex=signal(mutex);
empty=signal(empty);
x--;
}
int main()
{
	int n;
	void producer();
	void consumer();
	int wait(wait);
	int signal(wait);
	cout<<"producer"<<endl;
	cout<<"consumer"<<endl;
	cout<<"exit"<<endl;
	while(1)
	{
	cout<<"enter your choice"<<endl;
	switch(n)
	{
	case 1: if((mutex==1)&&(empty!=0))
            producer();
			else
			cout<<"buffer is full"<<endl;
			break;
	case 2: if((mutex==1)&&(full!=0))
	        consumer();
			else
			cout<<"buffer is empty"<<endl;
			break;
	case 3: exit(0);
	        break;						
	}
	
}
return 0;
}

