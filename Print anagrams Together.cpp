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
vector<vector<string>> solve(vector<string>str) {
	// time complexiy -->o(N *Mlog(N))
	//	space complexity -->O(N)
	unordered_map<string, vector<string>>mp;

	for (int i = 0; i < str.size(); i++) {
		string temp = str[i];
		sort(temp.begin(), temp.end());
		mp[temp].push_back(str[i]);
	}
	vector<vector<string>>ans(mp.size());
	int index = 0;
	for (auto x : mp) {
		auto v = x.second;
		for (int i = 0; i < v.size(); i++) {
			ans[index].pb(v[i]);
		}
		index++;
	}

	return ans;
}
int main() {
	fastio();
	int size;
	cin >> size;
	vector<vector<string>>temp;
	vector<string>str(size);
	for (int i = 0; i < size; i++)
		cin >> str[i];
	temp = solve(str);
	for (auto it : temp) {
		for (auto vctr : it) {
			cout << vctr << " ";
		}
		cout << endl;
	}
}