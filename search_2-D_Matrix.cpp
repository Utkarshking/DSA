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
#define deb1(x)   cout<<#x<<"="<<x<<"\n"
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
bool solve(vector<vector<int>>&v, int row, int col, int target) {
	//brute force approach
	// time complexity -->O(row*col)
	//space complexity -->O(1)
	// for (int i = 0; i < row; i++)
	//   for (int j = 0; j < col; j++) {
	//     if (v[i][j] == target) {
	//       return true;
	//     }
	//   }
	// return false;

	// time complexity -->O(row*lognbase(2)) --> for binary search
	//space complexity -->O(1)
	// for (int i = 0; i < row; i++) {
	//   if (binary_search(v[i].begin(), v[i].end(), target)) {
	//     return true;
	//   }
	// }
	// return false;

	// time complexity -->O(log n)
	//space complexity -->O(N)--> for auxillary space
	// vector<int>ans;
	// for (int i = 0; i < row; i++)
	//   for (int j = 0; j < col; j++) {
	//     ans.pb(v[i][j]);
	//   }
	// for (auto it : ans) {
	//   cout << it << " ";
	// }
	// cout << nline;
	// if (binary_search(ans.begin(), ans.end(), target)) {
	//   return true;
	// }
	// return false;

	// time complexity -->O()
	// space complexity -->O()
	// int i = 0;
	// int j = col - 1;
	// while (i < row && j >= 0) {
	//   if (v[i][j] == target) {
	//     return true;
	//   }
	//   else if (v[i][j] < target) {
	//     i++;
	//   }
	//   else {
	//     j--;
	//   }
	// }
	// return false;

	// time complexity -->O(log2(rows*columns))
	//space complexity -->O(1)
	// int row=matrix.size();
	//  int col=matrix[0].size();
	//       int low=0;
	//       int high=(row*col)-1;
	//       while(low<=high){
	//           int mid=(low+(high-low)/2);
	//           //mid/col and mid%col is done for the imaginary index
	//           if(matrix[mid/col][mid%col]==target){
	//               return true;
	//           }
	//           else if(matrix[mid/col][mid%col]>target){
	//               high=mid-1;
	//           }
	//           else{
	//               low=mid+1;
	//           }
	//       }
	//       return false;

}





int main() {
	fastio();
	int row;
	int col;
	cin >> row >> col;
	vector<vector<int>>v(row, vector<int>(col));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> v[i][j];
		}
	}
	int target;
	cin >> target;
	cout << solve(v, row, col, target);
}