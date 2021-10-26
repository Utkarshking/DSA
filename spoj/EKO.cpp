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
bool blackbox(vector<int>v, int size, int height, int mid) {
	int diff = 0;
	for (int i = 0; i < size; i++) {
		if (v[i] > mid) {
			diff += v[i] - mid;
		}
		else if (v[i] < mid) continue;
		if (diff >= height) return true;
	}
	return false;
}
int solve(vector<int>v, int size, int height) {
	// sort
	sort(v.begin(), v.end());
	// result variable
	int res = -1;
	int low = v[0];
	int high = v[size - 1];
	while (low <= high) {
		int mid = (low + high) >> 1;
		if (blackbox(v, size, height, mid)) {
			res = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return res;
}
int main() {
	fastio();
	ll size, height;
	cin >> size >> height;
	vector<ll>v(size);
	for (int i = 0; i < size; i++) cin >> v[i];
	cout << solve(v, size, height);
}
