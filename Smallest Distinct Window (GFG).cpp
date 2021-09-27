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
int solve(string str) {
	set<char>s;
	unordered_map<char, int>mp;
	for (int i = 0; i < str.length(); i++) {
		s.emplace(str[i]);
	}
	int n = s.size();
	int i = 0;
	// first charecter included so the size of the window has been expanded
	int j = 1;
	int count = 0;
	// first charecter already included
	mp[str[i]]++;
	//also increased the count value because of this
	count++;
	int mini = INT_MAX;
	while (i <= j and j < str.length()) {
		// if the map increament is 0 we will increase the counter value
		//otherwise we will not increase counter we will increase the map value of that char , and also window will expand
		if (count < n) {
			if (mp[str[j]] == 0) count++;
			mp[str[j]]++;
			j++;
		}
		else if (count == n) {
			// shrinking the window
			// j-i :window length
			mini = min(mini, j - i);
			if (mp[str[i]] == 1) count--;
			mp[str[i]]--;
			//shrinking
			i++;
		}
	}
	// for taking the min window for the min value
	while (count == n) {
		mini = min(mini, j - i);
		if (mp[str[i]] == 1) count--;
		mp[str[i]]--;
		i++;
	}
	return mini;
}

int main() {
	fastio();
	string s;
	cin >> s;
	cout << solve(s);

}