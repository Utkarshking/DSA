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
string solve(string str[], string input) {
	string output;
	int n = input.size();
	for (int i = 0; i < n; i++) {
		// check for space
		if (input[i] == ' ') {
			output = output + "0";
		}
		else {
			int pos = input[i] - 'A';
			output = output + str[pos];
		}
	}
	return output;
}
int main() {
	fastio();
	string s[] = {"2", "22", "222",
	              "3", "33", "333",
	              "4", "44", "444",
	              "5", "55", "555",
	              "6", "66", "666",
	              "7", "77", "777", "7777",
	              "8", "88", "888",
	              "9", "99", "999", "9999"
	             };
	string input;
	cin >> input;
	cout << solve(s, input);
}