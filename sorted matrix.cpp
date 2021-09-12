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
int solve(vector<vector<int>>&v) {
  int row = v.size();
  int col = v[0].size();
  vector<int>temp(row * col);
  int k = 0;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      temp[k++] = v[i][j];

  sort(temp.begin(), temp.end());

  k = 0;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      v[i][j] = temp[k++];


  // return 0;
  for (auto it : v) {
    for (auto vctr : it) {
      cout << vctr << " ";
    }
    cout << nline;
  }
  return 0;
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