#include<bits/stdc++.h>
using namespace std;
void dectobinary(int num) {

}
//return the the bit at an exact position
int getbit(int number,int pos) {
int mask;
mask=1<<pos;
if(number && mask!=0)
return 1;
else 
return 0;
}
//sets the bit at a given position 
int setbit(int num,int pos) {
    int mask=1<<pos;
    num=num|mask;
    return num;
}
int main()
{
int no,pos;
cout<<"enter the value "<<endl;
cin>>no;
cout<<"enter the position"<<endl;
cin>>pos;
dectobinary(a);
//invokes the function to get the exact bit 
cout<<"the bit at position "<<pos<<" :"<<getbit(a,pos)<<endl;
cout<<"the bit is set at "<<pos<<"  "<<setbit(a,pos)<<endl; //return 0;    

}