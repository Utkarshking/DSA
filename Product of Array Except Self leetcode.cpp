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
void solve(vector<int>&v)
{
  int n = v.size();
  vector<int>ans(n, 1);
  // time complexity -->O(N^2)
  //space complexity -->O(1)
  // for (int i = 0; i < v.size(); i++) {
  //   int product = 1;
  //   for (int j = 0; j < v.size(); j++) {
  //     if (j != i) {
  //       product *= v[j];
  //     }
  //     else {
  //       continue;
  //     }
  //   }
  //   ans.pb(product);
  // }
  // for (auto it : ans) {
  //   cout << it << " ";
  // }

  // time complexity -->O(N)
  //space complexity -->O(N)
  int rightproduct = 1;
  int leftproduct = 1;
  // for left handside
  for (int i = 0; i < v.size(); i++) {
    ans[i] *= leftproduct;
    leftproduct *= v[i];
  }
  // for righthand side
  for (int i = v.size() - 1; i >= 0; i--) {
    ans[i] *= rightproduct;
    rightproduct *= v[i];
  }
  for (auto it : ans) {
    cout << it << " ";
  }
}

int main() {
  fastio();
  int size;
  cin >> size;
  vector<int>v(size);
  for (int i = 0; i < size; i++)   cin >> v[i];
  solve(v);
}