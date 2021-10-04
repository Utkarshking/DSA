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
int solve(vector<int>arr) {
	//time complexity -->O(N)
	//space complexity -->O(N)
	// unordered_map<int, int>mpp;
	// for (int i = 0; i < arr.size(); i++) {
	// 	mpp[arr[i]]++;
	// }
	// int ans = -1;
	// int n = arr.size();
	// for (auto it : mpp) {
	// 	if (it.second > n / 2) {
	// 		ans = it.first;
	// 	}
	// }
	// return ans;

	// time complexity -->O(NlogN)
	// space complexity -->O(1)
	// sort(arr.begin(), arr.end());
	// int cnt = 0;
	// int ans = 0;
	// int n = arr.size();
	// for (int i = 0; i < arr.size(); i++) {
	// 	if (arr[i] == arr[i + 1]) {
	// 		cnt = cnt + 2;
	// 		if (cnt > n / 2) {
	// 			ans = arr[i];
	// 		}
	// 		else
	// 			continue;
	// 	}
	// 	else {
	// 		continue;
	// 	}
	// }
	// return ans;

	// time complexity -->O(N^2)
	//space complexity -->O(1)
	// int cnt = 0;
	// int ans = 0;
	// int n = arr.size();
	// for (int i = 0; i < arr.size(); i++) {
	// 	for (int j = i + 1; j < arr.size(); j++) {
	// 		if (arr[i] == arr[j]) {
	// 			cnt += 2;
	// 			if (cnt > n / 2) {
	// 				ans = arr[i];
	// 			}
	// 		}
	// 	}
	// }
	// return ans;

	// time complexity -->O()
	//space complextity -->O()
	int cnt = 0;
	int candidate = 0;
	for (int num : arr) {
		if (cnt == 0) {
			candidate = num;
		}
		if (num == candidate)
		{
			cnt++;
		}
		else {
			cnt--;
		}
	}
	return candidate;
}
int main() {
	fastio();
	int size;
	cin >> size;
	vector<int>arr(size);
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << solve(arr);
}