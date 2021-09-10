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
void solve(vector<vector<int>>&v, int row, int col) {
  vector<int>ans;
  int T = 0;
  int B = row - 1;
  int L = 0;
  int R = col - 1;
  int dir = 0;
  while (T <= B && L <= R) {
    if (dir == 0) {
      for (int i = L; i <= R; i++) {
        ans.pb(v[T][i]);
      }
      dir = 1;
      T++;
    }
    else if (dir == 1) {
      for (int i = T; i <= B; i++) {
        ans.pb(v[i][R]);
      }
      dir = 2;
      R--;
    }
    else if (dir == 2) {
      for (int i = R; i >= L; i--) {
        ans.pb(v[B][i]);
      }
      B--;
      dir = 3;
    }
    else if (dir == 3) {
      for (int i = B; i >= T; i--) {
        ans.pb(v[i][L]);
      }
      L++;
      dir = 0;
    }
  }
  for (auto it : ans) {
    cout << it << " ";
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
  solve(v, row, col);
}