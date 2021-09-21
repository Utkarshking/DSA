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
#define d 256
void solve(string s, string pat, int q) {
	// initial as value of the pattern
	int p = 0;
	// intial as value of the actual text
	int t = 0;
	int i, j;
	int h = 1;
	int m = pat.size();
	int n = s.size();
	// te value of te as would be pow(d,M-1)%q;
	for (int i = 0; i < pat.size() - 1; i++)
		h = (h * d) % q;
	// calculating te inital as value of te pattern and text
	// window of te text string
	for ( i = 0; i < pat.size(); i++)
	{
		p = (d * p + pat[i]) % q;
		t = (d * t + s[i]) % q;
	}
	// slide te pattern over text one by one
	for (i = 0; i <= n - m; i++) {
		// ceck te as values of te current text
		// window is equal to te pattern string
		if (p == t) {
			// ceck for te carecters one by one
			for (j = 0; j < m; j++) {

				if (s[i + j] != pat[j])
					break;
			}
			// pat[0....m-1] = s[i,i+1,....i+m-1]
			if (j == m) {
				cout << "pattern is found at :" << i << nline;

			}
		}

		//calculate as value for next window of text
		if (i < n - m) {
			t = (d * (t - s[i] * h) + s[i + m]) % q;
			// we might get negative value of p
			if (t < 0)
				t = (t + q);
		}
	}
}
int main() {
	fastio();
	string s;
	string pat;
// take te input of te actual string
	getline(cin, s);
// take te input of te pattern
	cin >> pat;
	// q is te prime number to avoid te spurious collision
	int q = 101;
	solve(s, pat, q);
}