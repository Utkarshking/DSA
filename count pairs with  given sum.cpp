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
#define vec			vector<pint,int>
#define PI          3.1415926535897932384626
using namespace std;
void solve(int size, vector<int>&v, int k) {
	// using brute force approach
	//time complexity:O(N^2)
	//space complexity:O(1)
	// ll count = 0;
	// for (int i = 0; i < v.size(); i++)
	// 	for (int j = i + 1; j < v.size(); j++) {
	// 		if (v[i] + v[j] == k) {
	// 			count++;
	// 		}
	// 	}
	// return count;


	// time complexity :O(N)
	// space complexity:O(N) --> ordered map
	unordered_map<int, int>mp;
	int count = 0;
	for (int i = 0; i < size; i++) {
		int x = k - v[i];
		if (mp[x] == 0) {
			// if the given element does not exist
			// then just increase the frequency
			// at that index
			mp[v[i]]++;
		}
		else {
			// increasing the count value
			count += mp[x];
			// increasing the frequency of the number
			mp[v[i]]++;
		}

	}

	cout << count << " ";

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>v(n);
	int k;
	for (int i = 0; i < n; i++) cin >> v[i];
	cin >> k;
	solve(n, v, k);

}