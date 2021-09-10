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
  // time complexity -->O(N^3)
  //space complexity -->O(M)--> M is the size of the set
  // unordered_set<int>s;
  // for (int i = 0; i < v.size(); i++)
  //   for (int j = i + 1; j < v.size(); j++)
  //     for (int k = j + 1; k < v.size(); k++) {
  //       if (v[i] + v[j] + v[k] == 0) {
  //         s.emplace(i);
  //         s.emplace(j);
  //         s.emplace(k);
  //       }
  //     }
  // for (auto it : s) {
  //   cout << it << " ";
  // }

  // time complexity -->O(N^2)
  //space complexity -->O(N)
  // unordered_map<int, int>mp;
  // unordered_set<int>s;
  // for (int i = 0; i < v.size(); i++) {
  //   mp[v[i]]++;
  // }
  // for (int i = 0; i < v.size(); i++) {
  //   mp[v[i]]--;
  //   for (int j = i + 1; j < v.size(); j++) {
  //     mp[v[j]]--;
  //     int c = -(v[i] + v[j]);
  //     if (mp.find(c) != mp.end()) {
  //       s.insert(v[i]);
  //       s.insert(v[j]);
  //       s.insert(c);
  //       }
  //     mp[v[j]]++;
  //   }
  //   mp[v[i]]++;
  // }
  // for (auto it : s) {
  //   cout << it << " ";
  // }
  // time complexity -->O(N^2)
  //space complexity -->O(1)
  sort(v.begin(), v.end());
  vector<vector<int>>res;
  //moves for a
  for (int i = 0; i < v.size() - 2; i++) {
    if (i == 0 || (i > 0 && v[i] != v[i - 1])) {
      int low = i + 1;
      int high = v.size() - 1;
      int sum = 0 - v[i];
      while (low < high) {
        if (v[low] + v[high] == sum) {
          vector<int>temp;
          temp.pb(v[i]);
          temp.pb(v[low]);
          temp.pb(v[high]);
          res.pb(temp);
          while (low < high && v[low] == v[low + 1]) low++;
          while (low < high && v[high] == v[high - 1])high--;
          low++;
          high--;
        }
        else if (v[low] + v[high] < sum) {
          low++;
        }
        else {
          high--;
        }
      }
    }
  }
  for (auto it : res) {
    for (auto vctr : it) {
      cout << vctr << " ";
    }
    cout << nline;
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