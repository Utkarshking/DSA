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
int solve(vector<int>&v)
{ 	
  //Time complexity:O(NlogN)
  //space complexity:O(1)
  // sort(v.begin(),v.end());
  // int a=0;
  // for(int i=1;i<v.size();i++){
  //   if(v[i-1]+1==v[i]){
  //     a++;
  //   }
  //   else{

  //   }
  // }
  // cout<<a<<endl;
  // time complexity:O(N)
  // space complexity:O(N)--> for unordered_set
  unordered_set<int>s;
  int count=0;
  // inserting elements in the set
  for(auto i=0;i<v.size();i++){
    s.emplace(v[i]);
  }
  // checking for hashing
  for(int i=0;i<v.size();i++){
      if(s.find(v[i]-1)==s.end()){
        int j=v[i];
        while(s.find(j)!=s.end()){
          j++;
        }
        count=max(count,j-v[i]);
      }
    }
  

return count;
}


int main(){
  fastio();
  int size;
  cin>>size;
  vector<int>v(size);
  for(int i=0;i<size;i++) cin>>v[i];
  cout<<solve(v);
}