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
string solve(vector<int>&arr1,vector<int>&arr2)
{  string s;
  unordered_map<int,int>mp;
  int size1=arr1.size();
  int size2=arr2.size();
  if(size1>size2){
  for(int i=0;i<size1;i++){
    mp[arr1[i]]++;
  }
  for(int i=0;i<size2;i++){
      if(mp.find(arr2[i])!=mp.end()){
        s="YES";
      }
      else{
        s="NO";
        break;
      }
    }
  }
  else if(size1<=size2){
    for(int i=0;i<size2;i++){
      mp[arr2[i]]++;
    }
    for(auto i=0;i<size1;i++){
      if(mp.find(arr1[i])!=mp.end()){
        s="YES";
      }
      else{
        s="NO";
        break;
      }
    }
  }
 return s;

}


int main(){
  fastio();
  int size;
  cin>>size;
  int _size;
  cin>>_size;
  vector<int>v(size);
  vector<int>v1(_size);
  for(int i=0;i<size;i++) cin>>v[i];
  for(int i=0;i<_size;i++) cin>>v1[i];
  cout<<solve(v,v1);
}