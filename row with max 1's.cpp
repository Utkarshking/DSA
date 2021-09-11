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
int countone(vector<int>row, int n) {
  int size = row.size();
  int index = 0;

  // linear search
  // for (int i = 0; i < size; i++) {
  //   if (row[i] == n) {
  //     index = i;
  //     int res = size - index;
  //     return res;
  //   }

  // binary search
  if (binary_search(row.begin(), row.end(), 1))
  {
    auto it = lower_bound(row.begin(), row.end(), 1);
    index = (it - row.begin());
    int res = size - index;
    return res;
  }
  else {
    return 0;
  }
}
int solve(vector<vector<int>>&v) {
  // timc complexity -->O(N^2)
  //space complexity -->O(1)
  // int maxindex = 0;
  // int maxcnt = 0;
  // int row = v.size();
  // int col = v[0].size();
  // for (int i = 0; i < row; i++) {
  //   int cntone = 0;
  //   for (int j = 0; j < col; j++) {
  //     if (v[i][j] == 1) {
  //       cntone++;
  //       if (cntone > maxcnt) {
  //         maxcnt = cntone;
  //         maxindex = i;
  //       }
  //     }
  //   }
  // }
  // return maxindex;
  int cnt = 0;
  int maxcnt = 0;
  int maxindex = -1;
  int row = v.size();
  for (int i = 0; i < row; i++) {
    if (cnt < countone(v[i], 1)) {
      cnt = countone(v[i], 1);
      maxindex = i;
    }
  }
  return maxindex;
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