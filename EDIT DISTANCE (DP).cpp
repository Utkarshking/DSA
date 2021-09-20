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
int dp[10000][10000];
int solve(int i, int j, string s1, string s2) {
	// base case
	if (i == s1.length() || j == s2.length()) {
		return max((int)s2.length() - j, (int)s1.length() - i);
	}
	if (dp[i][j] != -1)
		return dp[i][j];
	int ans;
	// if the charecters are equal
	if (s1[i] == s2[j]) {
		ans = solve(i + 1, j + 1, s1, s2);
	}
	else {
		// add a charecter
		int option1 = 1 + solve(i, j + 1, s1, s2);
		// remove the charecter
		int option2 = 1 + solve(i + 1, j, s1, s2);
		// replace the charecter
		int option3 = 1 + solve(i + 1, j + 1, s1, s2);
		ans = min(option1, min(option2, option3));
	}
	return dp[i][j] = ans;
}

int main() {
	fastio();
	memset(dp, -1, sizeof(dp));
	string s;
	cin >> s;
	string s1;
	cin >> s1;
	cout << solve(0, 0, s, s1);
}