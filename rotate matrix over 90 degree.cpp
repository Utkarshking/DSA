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
void solve(vector<vector<int>>&v) {
  int row = v.size();
  int col = v[0].size();
  // vector<vector<int>>temp(row, vector<int>(col));
  // time complexity -->O(N^2)
  //space complexity -->O(N^2)-->taking a temp 2-d vector
  // for (int i = 0, k = col - 1; i<row, k >= 0; i++, k--) {
  //   for (int j = 0; j < col; j++) {
  //     temp[j][k] = v[i][j];
  //   }
  // }
  // for (auto it : temp) {
  //   for (auto vctr : it) {
  //     cout << vctr << " ";
  //   }
  //   cout << nline;
  // }
  // time complexity -->O(N^2)--> for taking transpose
  // +O(N^2)--> for reversing every row

  // taking transpose
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < i; j++) {
      swap(v[i][j], v[j][i]);
    }
  }
  // reversing every row
  for (int i = 0; i < row; i++) {
    reverse(v[i].begin(), v[i].end());
  }
  // traversing the matrix
  for (auto it : v) {
    for (auto vctr : it) {
      cout << vctr << " ";
    }
    cout << nline;
  }

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
  solve(v);
}