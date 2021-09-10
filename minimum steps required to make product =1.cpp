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
int solve(vector<int> v) {
	int product = 1;
	int cntzero = 0;
	int cntneg = 0;
	int cntpos = 0;
	int res = 0;
	for (int i = 0; i < v.size(); i++) {
		product *= v[i];
		if (v[i] == 0) cntzero++;
		if (v[i] < 0)  cntneg++;
		if (v[i] > 0)  cntpos++;
	}
	if (product == 1) {
		return 0;
	}
	else if (cntpos == v.size()) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > 1) {
				res += v[i] - 1;
			}
		}
		return res;
	}

	else {
		if (cntneg % 2 == 0 || (cntzero == cntneg)) {
			for (int i = 0; i < v.size(); i++) {
				// for negative number
				if (v[i] < 0) {
					while (v[i] < -1) {
						v[i]++;
						res++;
					}
				}
				else if (v[i] > 1) {
					while (v[i] > 1) {
						v[i]--;
						res++;
					}
				}
				else if (v[i] == 0) {
					res++;
				}

			}
			return res;
		}
		else if (cntneg % 2 == 1 && cntzero > 0) {
			for (int i = 0; i < v.size(); i++) {
				// for negative number
				if (v[i] < 0) {
					while (v[i] < -1) {
						v[i]++;
						res++;
					}
				}
				else if (v[i] > 1) {
					while (v[i] > 1) {
						v[i]--;
						res++;
					}
				}
				else if (v[i] == 0) {
					res++;
				}

			}
			return res;
		}
		else if (cntneg % 2 == 1 && cntzero == 0) {
			for (int i = 0; i < v.size(); i++) {
				// for negative number
				if (v[i] < 0) {
					while (v[i] < -1) {
						v[i]++;
						res++;
					}
				}
				else if (v[i] > 1) {
					while (v[i] > 1) {
						v[i]--;
						res++;
					}
				}
				else if (v[i] == 0) {
					res++;
				}

			}
			return res + 2;
		}

	}
}

int main() {
	int size;
	cin >> size;
	vector<int>v(size);
	for (int i = 0; i < size; i++)  cin >> v[i];
	cout << solve(v);
}