#include<bits/stdc++.h>
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll        long long int
#define lld       long long double
#define p 		  printf
#define si(x)     scanf("%I64d",&x)
#define sl(x)     scanf("%lld",&x)
#define ss(x)     scanf("%s",&s)
#define pi(x)     printf("%I64d\n",x)
#define pl(x)     printf("%lld\n",x)
#define ps(s)     printf("%s\n",s)
#define deb1(x)   cout<<#x<<"="<<x
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb        emplace_back
#define F         first
#define S         second
#define pii       pair<int,int>
#define pll       pair<ll,ll>
#define vec       vector<int,int>
#define nline     "\n"
#define PI        3.1415926535897932384626
using namespace std;
bool ifpossible(vector<int>v,int target,int barrier){
	int allocatechild=1;
	int pages=0;
	for(int i=0;i<v.size();i++){
		if(v[i]>barrier)return false;
		else if(v[i]+pages>barrier){
			//we are now talking about child B
			pages=0;
			allocatechild++;
			// so now collecting the fresh pages for child B
			pages=v[i];
		}
		else{
			// we are taking about child A
			pages+=v[i];
		}
	}
	if(allocatechild>target){
		return false;
	}
	return true;
}
int allocatebooks(vector<int>v,int target){
	int low=*min_element(v.begin(),v.end());
	int high=0;
	int sum=0;
	for(int i=0;i<v.size();i++){
		sum+=v[i];
	}
	high=sum;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)>>1;
		if(ifpossible(v,target,mid)){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return low;
}
int main() {
	fastio();	
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int k;
	cin>>k;
	cout<<allocatebooks(v,k);

}
