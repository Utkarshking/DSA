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
void solve(vector<int>&v, int a, int b)
{
  int start = 0;
  int end = v.size() - 1;
  for (int i = 0; i <= right; i++) {
    if (v[i] < a) {
      swap(v[i], v[start]);
      start++;
    }
    else if (v[i] > b) {
      swap(v[i], v[end]);
      end--;
      i--;
    }
  }

}

int main() {
  fastio();
  int size;
  cin >> size;
  vector<int>v(size);
  for (int i = 0; i < size; i++) cin >> v[i];
  int a, b;
  cin >> a >> b;
  solve(v, a, b);
}