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
bool checklen(string s1, string s2, string res) {
  if (s1.size() + s2.size() != res.size()) {
    return false;
  }
  else {
    return true;
  }
}
bool checkshuffle(string s1, string s2, string str) {
  //sort each string to make the comparison easier
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  sort(str.begin(), str.end());
  int i = 0, j = 0, k = 0;
  while (k != str.size()) {
    if (i < s1.size() && s1[i] == str[k]) {
      i++;
    }
    else if (j < s2.size() && s2[j] == str[k]) {
      j++;
    }
    else {
      return false;
    }
    k++;
  }
  if (i < s1.size() || j < s2.size()) {
    return false;
  }
  return true;

}
void solve(string s1, string s2, vector<string>str) {
  for (auto it : str) {
    if (checklen(s1, s2, it) == true && checkshuffle(s1, s2, it) == true) {
      cout << "the strings are shuffled" << nline;
    }
    else {
      cout << "strings are not shuffled" << nline;
    }
  }
}

int main() {
  fastio();
  //enter first string
  string s;
  cin >> s;
  //enter the second string
  string s1;
  cin >> s1;
  int size;
  cin >> size;
  // enter the third string
  vector<string>str(size);
  for (int i = 0; i < size; i++) {
    cin >> str[i];
  }
  solve(s, s1, str);
}