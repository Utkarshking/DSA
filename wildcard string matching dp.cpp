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
bool solve(string str, string pattern) {
	int size1 = str.size();
	int size2 = pattern.size();
	// int dp[size2 + 1][size1 + 1];
	vector<vector<int>>dp(size2 + 1, vector<int>(size1 + 1));
	for (int i = dp.size() - 1; i >= 0; i--) {
		for (int j = dp[0].size() - 1; j >= 0; j--) {
			if (i == dp.size() - 1 and j == dp[0].size() - 1) {
				dp[i][j] = true;
			}
			else if (i == dp.size() - 1) {
				dp[i][j] = false;
			}
			else if (j == dp[0].size() - 1) {
				if (pattern[i] == '*') {
					dp[i][j] = dp[i + 1][j];
				}
				else {
					dp[i][j] = false;
				}
			}
			else {
				if (pattern[i] == '?') {
					dp[i][j] = dp[i + 1][j + 1];
				}
				else if (pattern[i] == '*') {
					dp[i][j] = dp[i + 1][j] || dp[i][j + 1];
				}
				else if (pattern[i] == str[j]) {
					dp[i][j] = dp[i + 1][j + 1];
				}
				else {
					dp[i][j] = false;
				}
			}
		}
	}
	return dp[0][0];
}
int main() {
	fastio();
	string s;
	cin >> s;
	string t;
	cin >> t;
	cout << solve(s, t);
}