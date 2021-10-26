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
int static countsetbits( int n) {
	int cnt = 0;
	while (n) {
		cnt += n & 1;
		n >>= 1;
	}
	return cnt;
}
static bool compare(int a, int b) {
	int p = countsetbits(a);
	int q = countsetbits(b);
	if (p == q) {
		return (a <= b);
	}
	else {
		return (p < q);
	}
}
vector<int> solve (vector<int>v) {
	sort(v.begin(), v.end(), compare);
	return v;
}
int main() {
	fastio();
	int size;
	cin >> size;
	vector<int>v(size);
	vector<int>ans;
	for (int i = 0; i < size; i++)
		cin >> v[i];
	ans = solve(v);
	for (auto it : ans) {
		cout << it << " ";
	}
}