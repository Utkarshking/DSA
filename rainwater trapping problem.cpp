#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define PI        3.1415926535897932384626
using namespace std;
ll solve(vector<int> arr) {
  //time complexity-->O(N)
  //space complexity-->O(N)
  // int n = arr.size();
  // int left[n];
  // int right[n];
  // ll sum = 0;
  // making the left traversal
  // left[0] = arr[0];
  // for (int i = 1; i < n - 1; i++) {
  //   left[i] = max(arr[i], left[i - 1]);
  // }
  // making the right traversal
  // right[n - 1] = arr[n - 1];
  // for (int i = n - 2; i >= 0; i--) {
  //   right[i] = max(arr[i], right[i + 1]);
  // }
  // for (int i = 0; i < n; i++) {
  //   sum += min(left[i], right[i]) - arr[i];
  // }
  // return sum;

  //time complexity-->O(N)
  //space complexity-->O(1)
  //two pointer approach
  int n = arr.size();
  int left = 0;
  int right = n - 1;
  int res = 0;
  int leftmax = 0;
  int rightmax = 0;
  while (left <= right) {
    if (arr[left] <= arr[right]) {
      if (arr[left] >= leftmax) {
        leftmax = arr[left];
      }
      else {
        res += leftmax - arr[left];
      }
      left++;
    }
    else {
      if (arr[right] >= rightmax) {
        rightmax = arr[right];
      }
      else {
        res += rightmax - arr[right];
      }
      right--;
    }
  }

  return res;
}

int main() {

  fastio();
  int size;
  cin >> size;
  vector<int>v(size);
  for (int i = 0; i < size; i++) cin >> v[i];
  cout << solve(v);
}