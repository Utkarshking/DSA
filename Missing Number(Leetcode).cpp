#include<bits/stdc++.h>
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll        long long int
#define lld       long long double
#define si(x)     scanf("%I64d",&x)
#define sl(x)     scanf("%lld",&x)
#define ss(x)     scanf("%s",s)
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
int solve (vector<int>v) {
	// int i = *max_element(v.begin(), v.end());
	// int j = *min_element(v.begin(), v.end());
	// sort(v.begin(), v.end());
	// bool res = binary_search(v.begin(), v.end(), 0);
	// for (int k = j; k <= i; k++) {
	// 	// cout << k << endl;
	// 	if (binary_search(v.begin(), v.end(), k) == false) {
	// 		return k;
	// 	}
	// 	else {
	// 		continue;
	// 	}
	// }
	// return -1;
	//time complexity -->O(Nlog(N))
	//space complexity -->O(1)
	// sort(v.begin(), v.end());
	// int ans = 0;
	// int n = v.size();
	// for (int i = 0; i <= n; i++) {
	// 	if (binary_search(v.begin(), v.end(), i) == false) {
	// 		ans = i;
	// 		break;
	// 	}
	// }
	// return ans;
	// time complexity -->O(N)
	//space complexity -->O(N)
	unordered_map<int, int>mpp;
	int ans = 0;
	for (int i = 0; i < v.size(); i++)
		mpp[v[i]]++;
	for (int i = 0; i <= v.size(); i++) {
		if (!mpp[i]) {
			ans = i;
		}
	}
	return ans;
}
int main() {
	fastio();
	int size;
	cin >> size;
	vector<int>v(size);
	for (int i = 0; i < size; i++)
		cin >> v[i];
	cout << solve(v);
}