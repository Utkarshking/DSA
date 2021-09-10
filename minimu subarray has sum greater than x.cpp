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
int solve(vector<int>&v, int target)
{
  // time complexity-->O(N^2)
  // space complexity -->O(1)
  // int minindex = INT_MAX;
  // for (int i = 0; i < v.size(); i++) {
  //   int sum = 0;
  //   for (int j = i + 1; j < v.size(); j++) {
  //     sum += v[j];
  //     if (sum > target) {
  //       minindex = min(minindex, j - i);
  //     }
  //   }
  // }
  // return minindex;

  // time complexity -->O(N)
  //space complexity -->O(1)
  int curr_sum = 0;
  int minlen = v.size() + 1;
  int end = 0;
  int start = 0;
  while (end < v.size()) {
    while (curr_sum <= target && end < v.size())
      curr_sum += v[end++];
    while (curr_sum > target && start < v.size()) {
      minlen = min(minlen, end - start);
      curr_sum -= v[start++];
    }
  }
  return minlen;
//   int minlen = v.size() + 1;
//   int sum = 0;
//   int start = 0;
//   for (int i = 0; i < v.size(); i++) {
//     if (sum <= target) {
//       sum += v[i];
//     }
//     else if (sum > target) {
//       minlen = min(minlen, i - start);
//       sum -= v[start++];
//     }
//   }
//   return minlen;
}

int main() {
  fastio();
  int size;
  cin >> size;
  int X;
  cin >> X;
  vector<int>v(size);
  for (int i = 0; i < size; i++) cin >> v[i];
  cout << solve(v, X);
}