#include <bits/stdc++.h>
#define ll           long long int
#define vec           vector<long long int>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
	int t;
	cin>>t;
	while(t--){
		int n;
		int sum= 0;
		int res;
		cin>>n;
		vec v(n);
		for(int i = 0 ; i < n; i++) cin>>v[i];
		//O(N)->Time Complexity for-->non-sorted array
		for(int i = 0 ; i < n ; i++){
			if( v[i] == -1){
				sum=accumulate(v.begin(),v.begin()+i,0);
				res=sum/i;
				v[i]=res;			
			}
			else{
				continue;
			}
		}
		for(auto it:v){
			cout<<it<<" ";
		}
		cout<<endl;
		
	}
	
	
	// your code goes here
	return 0;
}
