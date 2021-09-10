#include<bits/stdc++.h>
#include<string>
#define ll              long long int
#define vec 			vector<long long int>
#define swap(a,b)       {a=a^b; b=a^b; a=a^b;}
#define fo(i,a,b)		for(int i=a;i<=b;i++)
#define mp				map<int,int>
#define debug(x)        cout<<#x<<" "<<x
using namespace std;
int main() {
	ll x, y, z;
	ll sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		sum += x + y + z;
	}
	if (sum == 0)
		cout << "YES" << "\n";
	else if (sum != 0)
		cout << "NO" << "\n";

}