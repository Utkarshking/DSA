#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll 			long long int
#define lld      	long long double
#define si(x)	  	scanf("%I64d",&x)
#define sl(x)		scanf("%lld",&x)
#define ss(x)		scanf("%s",s)
#define pi(x)		printf("%I64d\n",x)
#define pl(x)		printf("%lld\n",x)
#define ps(s)		printf("%s\n",s)
#define deb1(x)    	cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			emplace_back
#define F 			first
#define S			second
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
using namespace std;
void solve(vector<int>&v,int size,int target)
{ 	
//4 2 -3 1 6
	//O(N^2 approach)
	// for(int i=0;i<size;i++){
	// 	for(int j=i+1;j<size;j++){
	// 		if(v[i]+v[j]==target){
	// 			cout<<i<<" "<<j<<endl;
	// 		}
	// 		else{
	// 			continue;
	// 		}
	// 	}
	// }
	// optimised approach in 
	// time complexity-->O(N)
	//space complexity -->O(N) --> using hashing
	unordered_map<int,int>mp;
	for(int i=0;i<size;i++)
	{
		int n=target-v[i];
		if(mp.find(n)!=mp.end()){
			ans.pb(mp[n]);
			ans.pb(i);
			return ans;
		}
		else {
			mp[v[i]]=i;
		}

	}

}


int main(){
  fastio();
  int size;
  int target;
  cin>>size;
  cin>>target;
  vector<int>v(size);
  for(int i=0;i<size;i++) cin>>v[i];
  solve(v,size,target);            
}