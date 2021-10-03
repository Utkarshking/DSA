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
string solve(string s) {
	unordered_map<char, char>mpp;
	bool start = false;
	bool never = false;
	bool atleastonce = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a' and start == true) {
			break;
		}
		else if (s[i] != 'a') {
			start = true;
		}
		if (s[i] != 'a' and start) {
			s[i]--;
			atleastonce = true;
		}
	}
	if (!atleastonce) {
		s.back() = 'z';
	}
	return s;
}
int main() {
	fastio();
	string s;
	cin >> s;
	cout << solve(s);
}