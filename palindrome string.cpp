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
string removeSpecialCharacter(string s)
{
  for (int i = 0; i < s.size(); i++) {

    // Finding the character whose
    // ASCII value fall under this
    // range
    if (s[i] < 'A' || s[i] > 'Z' &&
        s[i] < 'a' || s[i] > 'z')
    {
      // erase function to erase
      // the character
      s.erase(i, 1);
      i--;
    }
  }
  return s;
}
void solve(string s) {
  s.erase(remove(s.begin(), s.end(), ' '), s.end());
  s = removeSpecialCharacter(s);
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << s << endl;
  // string str;
  // for (int i = s.size() - 1; i >= 0; i--) {
  //   str.push_back(s[i]);
  // }
  // if (s == str) {
  //   cout << 1 << nline;
  // }
  // else {
  //   cout << 0 << nline;
  // }
}
int main() {
  fastio();
  string s;
  getline(cin, s);
  solve(s);
}