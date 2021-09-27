#include<bits/stdc++.h>
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll        long long int
#define lld       long long double
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
int solve(string s) {
	int c1 = 0;
	int c2 = 0;
	for (int i = 0; i < s.size(); i++) {
		// alternating logic
		if (i & 1 && s[i] == '0') {
			c1++;
		}
		if (i % 2 == 0 and s[i] == '1') {
			c1++;
		}
		if (i & 1 and s[i] == '1') {
			c2++;
		}
		if (i % 2 == 0 and s[i] == '0') {
			c2++;
		}
	}
	return min(c1, c2);
}
int main() {
	fastio();
	string s;
	cin >> s;
	cout << solve(s);
}