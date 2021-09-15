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
int solve(string s) {
  // s="1" or s="0"
  int cnt = 0;
  int count0 = 0;
  int count1 = 0;
  int n = s.length();
  if (n == 1)
    return -1;
  else {
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        count0++;
      }
      else if (s[i] == '1') {
        count1++;
      }
      if (count0 == count1) {
        cnt++;
      }
    }
    if (cnt == 0) {
      return -1;
    }
    return cnt;
  }


}

int main() {
  fastio();
  string s;
  cin >> s;
  cout << solve(s);
}