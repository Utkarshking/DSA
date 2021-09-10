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
void  solve(vector<int>&v)
{ 	
	// time complexity :O(N^2)
	// space complexity:O(1)

   // bool flag=false;
  // for(int i=0;i<v.size();i++)
 // {
// 	int sum=0;
// 	for(int j=i;j<v.size();j++){
// 		sum+=v[j];
// 		if(sum==0){
// 			flag=true;
// 			break;
// 		}
// 	}
// 	if(flag)
// 		break;
// }	
// cout<<"found: "<<flag;

// time complexity:O(N)
// space complexity:O(N) --> hashset
	// unordered_set<int>s;
	// int sum=0;
	// bool found = false;
	// for(int i=0;i<v.size();i++){
	// 	sum+=v[i];
	// 	if(s.find(sum)==s.end())
	// 	{
	// 		s.insert(sum);
	// 	}
	// 	else if(s.find(sum)!=s.end()){
	// 		found=true;
	// 		break;
	// 	}
	// }
	// cout<<"found: "<<found;

// time complexity -->O(N)
	// space complexity -->O(1)
	unordered_map<int,bool>mp;
	int sum=0;
	for(int i=0;i<v.size();i++){
		sum+=v[i];
		if(sum==0 ||mp[sum]==true){
			return true;
		}
		mp[sum]=true;
	}
}


int main(){
  fastio();
  vector<int> v={2,1,3,4,-2};
  	solve(v);
 
}