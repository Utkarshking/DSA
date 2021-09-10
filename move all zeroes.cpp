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
// time complexity -->O(N)
  //space complexity -->O(1)
  // int cnt = 0;
  // vector<int>temp;
  // for (int i = 0; i < v.size(); i++) {
  //   if (v[i] == 0) {
  //     cnt++;
  //   }
  // }
  // for (int i = 0; i < v.size(); i++) {
  //   if (v[i] != 0) {
  //     temp.pb(v[i]);
  //   }
  // }
  // for (auto it : temp) {
  //   cout << it << " ";
  // }
  // cout << nline;
  // for (int i = 0; i < cnt; i++) {
  //   temp.pb(0);
  // }
  // for (auto it : temp) {
  //   cout << it << " ";
  // }
  //space complexity -->O(N)
  //time complexity -->O(1)
  int j = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] != 0) {
      v[j++] = v[i];
    }
  }
  while (j != v.size()) {
    v[j++] = 0;
  }


  for (auto it : v) {
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