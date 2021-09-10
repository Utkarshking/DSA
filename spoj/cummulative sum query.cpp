#include<bits/stdc++.h>
#define ll          long long int
#define vec			vector<long long int>
using namespace std;
int main(){
	int n;
	cin>>n;
	vec v(n);
	int q;
	int x,y;
	//input
	for(int i=0;i<n;i++)
	cin>>v[i];
	//entering the number of queries
	cin>>q;
	for(int i=0;i<q;i++){
	cin>>x>>y;
	int sum_1=accumulate(v.begin()+x,v.begin()+(y+1),0);
	cout<<sum_1<<endl;
		
	}
	
	
	
}