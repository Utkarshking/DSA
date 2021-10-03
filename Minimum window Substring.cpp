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
string solve(string s, string t) {
	string ans = "";
	unordered_map<char, int>mp;
	for (int i = 0; i < t.size(); i++) {
		mp[t[i]]++;
	}
	int mct = 0;
	int dmct = t.size();
	unordered_map<char, int>mp1;
	int i = 0;
	int j = 0;
	while (true) {
		bool flag1 = false;
		bool flag2 = false;
		//acquire
		while (i < s.length() and mct < dmct) {
			// increasing the mapcount and i pointer
			mp1[s[i]]++;
			// comparing the values between the two map values
			if (mp1[s[i]] <= mp[s[i]]) {
				mct++;
			}
			flag1 = true;

			i++;
		}
		// collect answers and release
		while (j < i and mct == dmct) {
			string pans = s.substr(j , i - j);
			if (ans.length() == 0 or pans.length() < ans.length()) {
				ans = pans;
			}
			if (mp1[s[j]] == 1) {
				mp1.erase(s[j]);
			}
			else {
				mp1[s[j]]--;
			}

			if (mp1[s[j]] < mp[s[j]]) {
				mct--;
			}
			flag2 = true;
			j++;
		}

		if (flag1 == false and flag2 == false) {
			break;
		}

	}
	return ans;
}
int main() {
	fastio();
	string s;
	cin >> s;
	string t;
	cin >> t;
	cout << solve(s, t);
}