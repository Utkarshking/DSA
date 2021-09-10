#include<bits/stdc++.h>
using namespace std;
bool ispower2(int num){
    //for the corner case we have done and with num as num can be zero
    return (num &&!(num&num-1));
}
int main()
{
int num;
    cout<<"Enter the number"<<endl;s
    cin>>num;
    cout<<ispower2(num);
return 0;  
}