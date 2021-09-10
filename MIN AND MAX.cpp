#include <iostream>
#include<array>
#include<set>
using namespace std;
int main() {
//   // std::cout << "Hello World!\n";
// array<int,5>arr={5,2,-1,3,4};
// int MAX=arr[0];
// int MIN=arr[1];
// for(int i=0;i<arr.size();i++){
//  //MAX OPERATION
//  if(arr[i]>=MAX){
//    MAX=arr[i];
//  }
//  //MIN OPERATION
//  if(arr[i]<MIN){
//    MIN=arr[i];
//  }
// }
// cout<<"MAX ELEMENT -> "<<MAX<<endl;
// cout<<"MIN ELEMENT -> "<<MIN<<endl;
// // for(auto it:arr){
//   // cout<<it<<endl;
// // }


// MULTISET SOLUTION
multiset<int>m={1,3,5,4,9};
// for(int i=0;i<=5;i++){
//   int x;
//   cin>>x;
//   m.emplace(x);
// } 

 for (auto it :m){
   cout<<it<<endl;
 }
//  cout<<*(m.begin());
//  cout<<*(m.rbegin());







}