//count the number of setbits in a number
#include<bits/stdc++.h>
using namespace std;
int countsetbit(int n){
    //counter variable to count the no of set bit 
    int count=0;
    //while loop takes O(n) time as n is the number of set bits
    while(n>0){
    count+=(n&1);
    n=n>>1;       //n/2^1
    }
    return count;
}
//another approach 
int approach2(int n){
    // long long  n_n=n-1;
  //same as above
    int count=0;
    while(n>0){
        n=(n&(n-1));
        count++;
       }
    return count;
}
int main(){
int number;
cout<<"enter the number"<<endl;
cin>>number;
// cout<<countsetbit(number);
cout<<approach2(number);
}