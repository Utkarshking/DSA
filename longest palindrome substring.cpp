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
int isPalindrome(string S)
{ string str;
  for (int i = S.size() - 1; i >= 0; i--) {
    str.push_back(S[i]);
  }
  if (S == str) {
    return 1;
  }
  return 0;
}

string solve(string s) {
  // time complexity -->O(N^3)
  //space complexity -->O(N)
  // int maxc = INT_MIN;
  // string final = "";
  // string temp = "";
  // int len = 0;
  // for (int i = 0; i < s.length(); i++) {
  //   temp = "";
  //   temp.push_back(s[i]);
  //   for (int j = i + 1; j < s.length(); j++) {
  //     temp.push_back(s[j]);
  //     if (isPalindrome(temp)) {
  //       len = (j - i) + 1;
  //       if (maxc < len) {
  //         maxc = len;
  //         final = temp;
  //       }
  //     }
  //   }
  // }
  // return final;
  // time complexity -->O(N^2)
  //space complexity -->O(1)
  if (s.length() <= 1)
    return s;
  int max_len = 1;
  int n = s.length();
  int start = 0;
  int end = 0;
  // odd length
  for (int i = 0; i < n - 1; i++) {
    int low = i, high = i;
    while (low >= 0 && high < n) {
      if (s[low] == s[high]) {
        low--;
        high++;
      }
      else {
        break;
      }
    }
    int len = high - low - 1;
    if (len > max_len) {
      max_len = len;
      start = low + 1;
      end = high - 1;
    }
  }
  // even length
  for (int i = 0; i < n - 1; i++) {
    int low = i, high = i + 1;
    while (low >= 0 && high < n) {
      if (s[low] == s[high]) {
        low--;
        high++;
      }
      else {
        break;
      }
    }
    int len = high - low - 1;
    if (len > max_len) {
      max_len = len;
      start = low + 1;
      end = high - 1;
    }
  }
  return s.substr(start, max_len);
}

int main() {
  fastio();
  string s;
  cin >> s;
  cout << solve(s);
}