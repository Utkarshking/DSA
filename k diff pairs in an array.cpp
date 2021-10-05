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
int solve(vector<int>arr, int k) {
	// time complexity -->O(N^2)
	//space complexity -->O(1)
	// for (int i = 0; i < arr.size(); i++) {
	// 	for (int j = i + 1; j < arr.size(); j++) {
	// 		if (abs(arr[i] - arr[j]) == k) {
	// 			return true;
	// 		}
	// 	}
	// }
	// return false;

	// time complexity -->O(N)
	//space complexity -->O(N)
	unordered_map<int, int>mpp;
	if (k < 0)
		return 0;
	int cnt = 0;
	for (auto it : arr) {
		mpp[it]++;
	}
	for (auto it : mpp) {
		//checking for duplicate elements
		if (k == 0) {
			if (it.second >= 2) {
				cnt++;
			}
		}
		//checking for non duplicate elements
		else {
			if (mpp.find(it.first + k) != mpp.end()) {
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	fastio();
	int size;
	cin >> size;
	vector<int>ans;
	vector<int>arr(size);
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int diff;
	cin >> diff;
	cout << solve(arr, diff);
}