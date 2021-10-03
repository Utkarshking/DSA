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
int findEl(int arr[], int size, int target) {
	int low = 0;
	int high = size - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}
int main() {
	fastio();
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int x;
	cin >> x;
	cout << findEl(arr, n, x);
}