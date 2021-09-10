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
void solve(vector<int>&v, vector<int>&v1, vector<int>&v2) {
	// unordered_set<int>final;
	// for (int i = 0; i < v.size(); i++) {
	// 	bool r = binary_search(v1.begin(), v1.end(), v[i]);
	// 	bool s = binary_search(v2.begin(), v2.end(), v[i]);
	// 	if (s & r == 1) {
	// 		final.pb(v[i]);
	// 	}
	// 	else {
	// 		continue;
	// 	}
	// }
	// for (auto it : final) {
	// 	cout << it << " ";
	// }

	// time complexity for this approach
	// time complexity:O(N1+N2+N3);
	//space complexity :O(N1+N2+N3);
	// unordered_map<int, int>mp;
	// unordered_map<int, int>mp1;
	// unordered_map<int, int>mp2;
	// vector<int> final;
	// //increasing frequency of first array
	// for (int i = 0; i < v.size(); i++) {
	// 	mp[v[i]]++;
	// }
	// // 2nd array --> hashmap
	// for (int i = 0; i < v1.size(); i++) {
	// 	mp1[v1[i]]++;
	// }
	// //3rd array
	// for (int i = 0; i < v2.size(); i++) {
	// mp2[v2[i]]++;
	// }
	// for (int i = 0; i < v.size(); i++) {
	// 	int x = v[i];
	// 	if (mp[x] != 0 && (mp1[x] != 0 && mp2[x] != 0)) {
	// 		final.pb(x);
	// 		mp[x] = 0;
	// 	}
	// 	else {
	// 		continue;
	// 	}
	// }
	// // cout << endl;
	// for (auto it : final) {
	// 	cout << it << " ";
	// }


	// time complexity :O(N1+N2+N3)
	//space complexity:O(1)
	int i = 0;
	int j = 0;
	int k = 0;
	vector<ll>final;
	while (i != v.size() && (j != v1.size() && k != v2.size())) {
		if (v[i] == v1[j] && v1[j] == v2[k]) {
			final.pb(v[i]);
			i++;
			j++;
			k++;
		}
		else if (v[i] < v1[j]) {
			i++;
		}
		else if (v1[j] < v2[k]) {
			j++;
		}
		else k++;
		// for not storing duplicate elements in the final array 
		int xx = v[i - 1];
		while (v[i] == xx) i++;
		int yy = v1[j - 1];
		while (v1[j] == yy) j++;
		int zz = v2[k - 1];
		while (v2[k] == zz) k++;

	}
	for (auto it : final) {
		cout << it << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>v = {3, 3, 3};
	vector<int>v1 = {3, 3, 3};
	vector<int>v2 = {3, 3, 3};
	solve(v, v1, v2);

}
