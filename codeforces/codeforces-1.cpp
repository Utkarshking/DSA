#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int MAX(int a,int b){
	if(a>b){
		return a;
	}	
	else if(b>a){
		return b;
	}
}
  int MIN(int a,int b){
  	if(a<b){
  		return a;
  	}
  	else if(a>b){
  		return b;
  	}
  }

int main() {
	
	
	// vector<int>v;
	int _max=0;
	int t;
	int a,b;
	cin>>t;
	int product;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		//initial values 
		a=MAX(v[0],v[1]);
		b=MIN(v[0],v[1]);
		_max=a*b;
		//checking all the pair of max and min values
		for(int i=0;i<n-1;i++){
			a=MAX(v[i],v[i+1]);
			b=MIN(v[i],v[i+1]);
			product=a*b;
			if(_max<product){
				_max=product;
			}
			else{
				continue;
			}
		}
		//i am checking in full array this time
			int max1=*max_element(v.begin(),v.end());
			auto min1=*min_element(v.begin(),v.end());
			product=max1*min1;
			if(product>_max){
				_max=product;
			}
			
			
	}
	
	cout<<_max<<endl;
	
	// your code goes here
	return 0;
	
}