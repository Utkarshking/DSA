#include<bits/stdc++.h>
using namespace std;
bool comp(pair<char,int>&p,pair<char,int>&p1){
	if(p.second<p1.second){
		return 1;
	}
	else{
		return 0;
	}
}
int ascii(char c){
	return int(c);
}

 int main()
{
    string s;
	getline(cin,s);
    unordered_map<char,int>m;
      for(int i=0;i<s.length();i++)
        m[s[i]]++;
	
	vector<pair<char,int>>vp;
	for(auto &it:m){
		vp.emplace_back(it);
	}
	cout<<endl;
	
	sort(vp.begin(),vp.end(),comp);
	cout<<endl;
	// for(auto it:vp){
	// cout<<it.first<<" "<<it.second<<endl;
	// }
	pair<char,int>max;
	int size=vp.size();
	max.first=vp[size-1].first;
	max.second=vp[size-1].second;
	cout<<endl;
	
	for(int i=0;i<vp.size();i++){
		if(max.second==vp[i].second){
			if(ascii(vp[i].first)<ascii(max.first)){
				max.first=vp[i].first;
				max.second=vp[i].second;
			}
			else{
				continue;
			}
			
		}
	}
	
	cout<<max.first<<" "<<max.second;

return 0;	
}