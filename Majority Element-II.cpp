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
vector<int> solve(vector<int>arr) {
	// time complexity -->O(NlogN)
	//space complexity -->O(N)
	// vector<int>final;
	// map<int, int>mpp;
	// for (int i = 0; i < arr.size(); i++) {
	// 	mpp[arr[i]]++;
	// }
	// int n = arr.size();
	// for (auto it : mpp) {
	// 	if (it.second > n / 3) {
	// 		final.pb(it.first);
	// 	}
	// }
	// return final;

	// time complexity -->O(n^2)
	//space complexity -->O()
	// vector<int>final;
	// int n = arr.size();
	// for (int i = 0; i < arr.size(); i++) {
	// 	int cnt = 0;
	// 	for (int j = 0; j < arr.size(); j++) {
	// 		if (arr[i] == arr[j]) {
	// 			cnt ++;
	// 		}
	// 	}
	// }
	// for (int num : final) {
	// 	cout << num << " ";
	// }
	// cout << endl;

	// time complexity -->O(N)+O(N)
	//space complexity -->O(1)
	int num1 = -1;
	int num2 = -1;
	ll len = arr.size();
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == num1)
			count1++;
		else if (arr[i] == num2)
			count2++;
		else if (count1 == 0) {
			num1 = arr[i];
			count1 = 1;
		}
		else if (count2 == 0) {
			num2 = arr[i];
			count2 = 1;
		}
		else {
			count1--;
			count2--;
		}
	}
	vector<int>ans;
	count1 = count2 = 0;
	// doing confirmation check
	for (int i = 0; i < len; i++) {
		if (arr[i] == num1) {
			count1++;
		}
		else if (arr[i] == num2) {
			count2++;
		}
	}
	if (count1 > len / 3)
	{
		ans.pb(num1);
	}
	if (count2 > len / 3) {
		ans.pb(num2);
	}
	return ans;
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
	ans = solve(arr);
	for (int num : ans) {
		cout << num << " ";
	}
}