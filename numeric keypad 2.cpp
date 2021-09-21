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
vector<string> rec(string &D, int i, map<int, string>&m) {
	//base case
	if (i == D.size()) {
		return {""};
	}
	vector<string>temp = rec(D, i + 1, m);
	vector<string>ans;
	for (auto it : m[D[i] - '0']) {
		for (auto x : temp) {
			ans.push_back(it + x);
		}
	}
	return ans;
}
vector<string> letterCombinations(string D) {
	if (D.size() == 0) {
		return {};
	}
	map<int, string>m;
	m[2] = "abc";
	m[3] = "def";
	m[4] = "ghi";
	m[5] = "jkl";
	m[6] = "mno";
	m[7] = "pqrs";
	m[8] = "tuv";
	m[9] = "wxyz";

	return rec(D, 0, m);

}
int main() {
	fastio();
	string input;
	cin >> input;
	cout << solve(s, input);
}