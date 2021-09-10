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
int reverse(ll n) {
  int reverse = 0;
  while (n != 0) {
    int lastdigit = n % 10; //for detecting the last digit
    reverse = reverse * 10 + lastdigit; //storing the last digit and on and on
    n = n / 10; //for removing the last digit
  }
  return reverse;

}
int solve(vector<int>&v)
{
  for (int i = 0; i < v.size(); i++) {
    if (v[i] != reverse(v[i])) {
      return 0;
    }
  }
  return 1;
}

int main() {
  fastio();
  int size;
  cin >> size;
  vector<int>v(size);
  for (int i = 0; i < size; i++)   cin >> v[i];
  cout << solve(v);
}