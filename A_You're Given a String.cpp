#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

bool compare(pair<string,int>a, pair<string, int>b){
	if(a.second>b.second) return true;
	else if(a.second<b.second) return false;
	else{
		if(a.first.length()>=b.first.length()) return true;
		return false;
	}
}
void solve(){
	string s; cin>>s;
	int n=s.length();
	map<string, int> mp;
	string temp;
	for(int i=0; i<n; i++){
		for(int j=1; j<=n-i; j++){
			temp=s.substr(i,j);
			mp[temp]++;
		}
	}
	
    vector<pair<string, int> > A; 
    for (auto& it : mp) { 
        A.push_back(it); 
    } 
 
    sort(A.begin(), A.end(), compare); 
    
	// for(auto i: A){
	// 	cout<<i.first<<" "<<i.second<<endl;
	// }
	int maxi=0;
	for(auto i: A){
		if(i.second>1){
			int x=i.first.length();
			maxi=max(maxi,x);
		}
	}
	// auto it=A.begin();
	// if(it->second>1)
	// 	cout<<it->first.length()<<endl;
	// else
	// 	cout<<0<<endl;
	cout<<maxi<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	solve();
	}
	return 0;
}