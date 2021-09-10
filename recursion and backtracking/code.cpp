#include<bits/stdc++.h>
#define ll 			long long int
#define si(x)	    scanf("%I64d",&x)
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
#define sort(x)		sort(all(x))
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
using namespace std;
void solve(int index, int sum, vector<int>&arr, vector<int>v, int n) {
	// base condiiton
	if (index == n) {
		if (sum % 3 == 0) {
			for (auto it : arr) {
				cout << it << " ";
			}
			return;
		}
	}
	//adding the sum
	v.pb(arr[index]);
	sum += arr[index];
	// pick it
	solve(index + 1, arr, sum, v, n);
	v.pop_back();
	sum -= a[index];
	// not picking it
	solve(index + 1, arr, sum, v, n);


}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int t;
	int s = 0;
	vector<int>v = {4, 3, 2};
	vector<int>v1;
	solve(0, s, v, v1, v.size());


}