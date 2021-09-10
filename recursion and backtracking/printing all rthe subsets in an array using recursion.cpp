#include<bits/stdc++.h>
#define ll 			long long int
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
#define sort(x)		sort(all(x))
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
using namespace std;
void solve(int index, vector<int>&ds, int arr[], int n) {
	if (index == n) {
		//base condiiton
		for (auto it : ds) {
			cout << it << " ";
			cout << "\n";
		}
		return;
	}
	//adding into the data structure
	//we are involving all the elements in the subset
	ds.pb(arr[index]);
	//going for all the posibilities ie. including all
	solve(index + 1, ds, arr, n);
	//we the recursive call comes back no i will remove the elements from
	//and this is done by involving the remaining subsets subsets
	//in which the some or the elements are not included
	ds.pop_back();
	// now not taking the last posibility and the increasing the index
	// to print the remaining subset
	solve(index + 1, ds, arr, n);



}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int t;
	int arr[] = {1, 2, 3};
	int size = sizeof(arr) / sizeof(arr[0]);
	vector<int>v(size);
	solve(0, v, arr, size);



}