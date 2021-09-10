#include<bits/stdc++.h>
#define ll 			long long int
#define lld         long long double
#define si(x)	    scanf("%I64d",&x)
#define sl(x)		scanf("%lld",&x)
#define ss(x)		scanf("%s",s)
#define pi(x)		printf("%I64d\n",x)
#define pl(x)		printf("%lld\n",x)
#define ps(s)		printf("%s\n",s)
#define deb1(x)    	cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			emplace_back
#define F 			first
#define S			second
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
using namespace std;
bool comp(vector<int> &a, vector<int> &b) {
	if (a[0] < b[0])
		return true;
	return false;
}

void solve(vector<vector<int>>v) {
	// pair<int, int> p;
	vector<int>v2;
	vector<vector<int>>v1;
	//before sorting
	// for (auto it : v) {
	// 	for (auto vctr : it) {
	// 		cout << vctr << " ";
	// 	}
	// 	cout << "\n";
	// }

	sort(v.begin(), v.end());
	cout << "\n";
	v2 = v[0];
	// deb2(p.first, p.second);     // {1,3}
	// cout << v.size();
	for (auto it : v) {
		if (it[0] <= v2[1]) {
			v2[1] = max(it[1], v2[1]);
		}
		else {
			v1.pb(v2);
			v2 = it;
		}
	}

	v1.pb(v2);

// traversing the vector of pairs
	for (auto it : v1) {
		for (auto vctr : it) {
			cout << vctr << " ";
		}
		cout << "\n";
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>>v(5, vector<int>(2));

	//entering the elements in the matrix
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> v[i][j];
		}
	}
	solve(v);


}