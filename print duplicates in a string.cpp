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
void solve(string s) {
  // time complexity -->O(N^2)
  //space complexity -->O(1)
  // for (int i = 0; i < s.size(); i++) {
  //   for (int j = i + 1; j < s.size(); j++) {
  //     if (s[i] == s[j]) {
  //       cout << s[j] << " ";
  //     }
  //   }
  // }

  // time complexity -->O(N)
  //space complexity -->O(N) -->using hashing
  // unordered_map<char, int>mp;
  // for (int i = 0; i < s.size(); i++) {
  //   mp[s[i]]++;
  // }
  // for (auto it : mp) {
  //   if (it.second > 1) {
  //     cout << it.first << nline;
  //   }
  // }


}
int main() {
  fastio();
  string s;
  getline(cin, s);
  solve(s);
}