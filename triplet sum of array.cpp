#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll 			  long long int
#define lld      	long long double
#define si(x)	  	scanf("%I64d",&x)
#define sl(x)		  scanf("%lld",&x)
#define ss(x)		  scanf("%s",s)
#define pi(x)		  printf("%I64d\n",x)
#define pl(x)		  printf("%lld\n",x)
#define ps(s)		  printf("%s\n",s)
#define deb1(x)   cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			  emplace_back
#define F 			  first
#define S			    second
#define pii			  pair<int,int>
#define pll			  pair<ll,ll>
#define vec			  vector<int,int>
#define PI        3.1415926535897932384626
using namespace std;
bool solve(vector<int>&v,int target)
{  
  bool ans=0;
  // int count=0;
// brute force solution
  //time complexity:O(N^3)
  // space complexity:O(1)
  // for(int i=0;i<v.size();i++){
  //   for(int j=i+1;j<v.size();j++){
  //     for(int k=j+1;k<v.size();k++){
  //       if(v[i]+v[j]+v[k]==target){
  //         count++;
  //       }
  //     }
  //   }
  // }
// return count;

  //2 pointer algorithm
  // time complexity-->O(N^2)+O(nlogn)-->for sorting
  // space complexity-->O(1)
 //  sort(v.begin(), v.end());
 //  for(int i=0;i<v.size();i++){
 //    int l=i+1;
 //    int r=v.size()-1;
 //    while(l<r){
 //      if(target>v[i]+v[l]+v[r]){
 //        l++;
 //      }
 //      else if(target<v[i]+v[l]+v[r]){
 //        r--;
 //      }
 //      else if(target==v[i]+v[l]+v[r]){
 //          ans=1;
 //          break;
 //      }
 //    }
 //  }
 // return ans;

  // aproach of using unordered_set<int>s
  // time complexity:O(N^2)
  // space complexity:O(N)
  // int curr=0;
  // unordered_set<int>s;
  // for(int i=0;i<v.size();i++){
  //   curr=target-v[i];
  //   for(int j=i+1;j<v.size();j++){
  //     if(s.find(curr-v[j])!=s.end()){
  //       ans=1;
  //       break;
  //     }
  //     s.emplace(v[j]);
  //   }
  // }
  // return ans;
}


int main(){
  fastio();
  int size;
  cin>>size;
  int k;
  cin>>k;
  vector<int>v(size);
  for(int i=0;i<size;i++) cin>>v[i];
  cout<<solve(v,k);
}