//this code is to  show how the binary semaphore works
#include<iostream>
using namespace std;
struct semaphore
{
//ready queue is there where the process are being there	
queue<process> q;
//enum data type is used to define the predefined constants 0,1
enum value{0,1};
};
//entry section code to get the process from ready queue to the cpu
wait(semaphore s)
{
//if the value of s is 1	
if(s.value==1)
{
//then the value will be set to zero and the process will be given to the cpu	
s.value=0;	
}
else
{
// put the process in the suspend list 	
q.push(wait);
//and sleep the process
sleep();
}
}
//exit  sectioon code
signal(semaphore s)
{
//if queue is empty then the value of the semaphore will automatically be one	
if(s.q is empty)
{
s.value=1;	
}
else
{
//else if it is not the value will be one because it is section of exit	
s.value=1;
//so pop the process from the suspend list and wake it
q.pop();
//wake up the process and go the cpu
wakeup();	
}	
}

