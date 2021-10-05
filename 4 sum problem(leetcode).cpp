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
vector<vector<int>> solve(vector<int>arr, int target) {
	// time complexity -->O(N^3Log(N))+O(Nlogn)-->for sorting
	//space complexity -->O(N)
	// map<pair<int, int>, pair<int, int>>mpp;
	// for (int i = 0; i < arr.size(); i++)
	// 	for (int j = i + 1; j < arr.size(); j++)
	// 		for (int k = j + 1; k < arr.size(); k++) {
	// 			int sum = arr[i] + arr[j] + arr[k];
	// 			int ele = target - sum;
	// 			if (binary_search(arr.begin() + k, arr.end(), ele)) {
	// 				mpp[ {arr[i], arr[j]}] = {arr[k], ele};
	// 			}
	// 		}
	// for (auto it : mpp) {
	// 	cout << it.F.F << "," << it.F.S << "-->" << it.S.F << "," << it.S.S << nline;
	// }

	// return 0;
	// time complexity -->O(N^3)+O(NlogN)
	//space complexity -->O(1)
	vector<vector<int>>res;
	if (arr.empty())
		return res;
	int n = arr.size();
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int target_2 = target - arr[j] - arr[i];
			int front = j + 1;
			int back = n - 1;
			while (front < back) {
				int two_sum = arr[front] + arr[back];
				if (two_sum < target_2)
					front++;
				else if (two_sum > target_2)
					back--;
				else {
					vector<int>quadruplet(4, 0);
					quadruplet[0] = arr[i];
					quadruplet[1] = arr[j];
					quadruplet[2] = arr[front];
					quadruplet[3] = arr[back];
					res.pb(quadruplet);
					//processing the duplicates of number 3
					while (front < back and arr[front] == quadruplet[2]) front++;
					//processing the duplicates of number 4
					while (front < back and arr[back] == quadruplet[3]) back--;
				}
			}
			//processing the duplicates of number 2
			while (j + 1 < n and arr[j + 1] == arr[j]) ++j;
			//processing the duplicates of number 1
			while (i + 1 < n and arr[i + 1] == arr[i]) ++i;
		}
	}
	return res;
}
int main() {
	fastio();
	int size;
	cin >> size;
	vector<int>arr(size);
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	vector<vector<int>>ans;
	ans = solve(arr, target);
	for (auto it : ans) {
		for (auto vctr : it) {
			cout << vctr << " ";
		}
		cout << nline;
	}
}