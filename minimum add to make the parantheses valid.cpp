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
	int closecnt = 0;
	int opencnt = 0;
	stack<int>st;
	for (int i = 0; i < s.size(); i++) {
		char ch = s[i];
		if (ch == '(') {
			st.push(ch);
		}
		else if (ch == ')' and !st.empty() and st.top() == '(') {
			st.pop();
		}
		else if (ch == ')' || st.empty() || st.top() == ')') {
			st.push(ch);
		}
	}
	return st.size();
}
int main() {
	fastio();
	string s;
	cin >> s;
	cout << solve(s);


}