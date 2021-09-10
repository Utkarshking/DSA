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
int solve(vector<int>v, ll m )
{ int res = INT_MAX;
  sort(v.begin(), v.end());
  for (int i = 0; i + m - 1 < v.size(); i++) {
    res = min(res, v[i + m - 1] - v[i]);
  }
  return res;
}

int main() {
  fastio();
  // {7, 3, 2, 4, 9, 12, 56}
  //{3, 4, 1, 9, 56, 7, 9, 12}
  int size;
  cin >> size;
  ll m;
  cin >> m;
  vector<int>v(size);
  for (int i = 0; i < size; i++) cin >> v[i];
  cout << solve(v, m);
}