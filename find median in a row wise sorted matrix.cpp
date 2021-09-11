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
int cntlessthanequaltomid(vector<int>&row, int mid) {
  int low = 0;
  int high = row.size() - 1;
  while (low <= high) {
    int md = (low + high) >> 1;
    if (row[md] <= mid) {
      low = md + 1;
    }
    else {
      high = md - 1;
    }
  }
  return low;
}

int solve(vector<vector<int>>&v) {
  // time complexity -->O(N)+O((n*m)log(m*n)) --> for sorting
  //space complexity -->O(N*M)
  // vector<int>ans;
  // for (int i = 0; i < row; i++) {
  //   for (int j = 0; j < col; j++) {
  //     ans.pb(v[i][j]);
  //   }
  // }
  // sort(ans.begin(), ans.end());
  // // for (auto it : ans) {
  // //   cout << it << " ";
  // // }
  // int l = 0;
  // int r = ans.size();
  // int mid = l + (r - l) / 2;
  // return ans[mid];

  // time complexity --O(32*rlogc)
  //space complexity -->O(1)
  int low = INT_MIN;
  int high = INT_MAX;
  int row = v.size();
  int col = v[0].size();
  while (low <= high) {
    int mid = (low + high) >> 1;
    //counter for checking actually the number<=mid
    int cnt = 0;
    for (int i = 0; i < row; i++) {
      cnt += cntlessthanequaltomid(v[i], mid);
    }
    if (cnt <= (row * col) / 2) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return low;
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
  cout << solve(v);
}