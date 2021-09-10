#include<bits/stdc++.h>
#define ll 			long long int
#define lld         long long double
#define si(x)	    scanf("%I64d",&x)
#define sl(x)		scanf("%lld",&x)
#define ss(x)		scanf("%s",s)
#define pi(x)		printf("%I64d\n",x)
#define pl(x)		printf("%lld\n",x)
#define ps(s)		printf("%s\n",s)
#define deb1(x)    	cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			emplace_back
#define F 			first
#define S			second
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
using namespace std;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void solve(vector<int> &v) {
	ll index2 = 0;
	ll index = 0;
	ll size = v.size();
	for (int i = size - 1; i >= 0; i--) {
		if (v[i] > v[i - 1]) {
			index = i - 1;
			for (int i = size - 1; i >= 0; i--) {
				if (v[i] > v[index]) {
					index2 = i;

					break;
				}
			}
			break;

		}
		else {
			continue;
		}
	}
	swap(&v[index], &v[index2]);

	reverse(v.begin() + index + 1, v.end());


	for (auto it : v) {
		cout << it << " ";
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>v = {1, 3, 5, 4, 2};
	solve(v);

}
