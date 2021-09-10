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
int max(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}
int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
void solve(vector<int>v, int size) {
// Done the question in : -
// time complexity : O(N)
// space complexity: O(N-- > auxillary array)
	// int aux[size];
	// aux[size - 1] = v[size - 1];
	// int max_1 = v[size - 1];
	// for (int i = size - 1; i >= 0; i--) {
	// 	max_1 = max(v[i - 1], max_1);
	// 	aux[i - 1] = max_1;
	// }
	// int maxprofit = aux[0] - v[0];
	// for (int i = 0; i < size; i++) {
	// 	maxprofit = max(aux[i + 1] - v[i + 1], maxprofit);
	// }
	// cout << maxprofit << endl;


// doing this question in:-
// TIME COMPLEXITY -->O(N)
// space complexity -->O(1)
	int minsofar = v[0];
	// deb1(minsofar);
	// cout << "\n";
	int profit = 0;
	for (int i = 0; i < size; i++) {
		minsofar = min(v[i], minsofar);
		// deb1(minsofar);
		if (profit < v[i] - minsofar) {
			profit = v[i] - minsofar;
		}
	}
	cout << profit << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)  cin >> v[i];
	solve(v, v.size());

}