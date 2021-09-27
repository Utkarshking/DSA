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
int  solve(string str) {
	// int n = str.length();
	// int j;
	// for (int i = 0; i < n; i++) {
	// 	if (str[i] == str[i + 1]) {
	// 		while (i < n) {
	// 			if (i < n - 1 && str[i] != str[i + 1]) {
	// 				j = i + 1;
	// 				break;
	// 			}
	// 			else if (i == n - 1 && str[i] != str[i + 1]) {
	// 				return 0;
	// 			}
	// 			else i++;

	// 		}
	// 		swap(str[i], str[j]);
	// 	}
	// }
	// return 1;
	int n = str.length();
	unordered_map<int, int>mp;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		mp[str[i]]++;
		if (mp[str[i]] > max) {
			max = mp[str[i]];
		}
	}
	if (max <= n - max + 1)
		return 1;
	return 0;
}
int main() {
	fastio();
	string s;
	cin >> s;
	cout << solve(s);
}