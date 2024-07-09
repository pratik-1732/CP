#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string s; cin>>s;
	set<char> alpha;
	for(auto i: s) alpha.insert(i);

	auto it= alpha.begin();
	vector<char> temp;
	for(it; it!=alpha.end(); it++){
		char ch= *it;
		temp.pb(ch);
	}
	
	vector<pair<char, char>> exchange;
	
	int l=temp.size(), j= l-1;
	for(int i=0; i<l; i++){
		exchange.pb(make_pair(temp[i], temp[j]));
		j--;
	}
	
	string ans=s;
	for(auto i: exchange){
		for(int j=0; j<n; j++){
			if(i.first==s[j]) ans[j]=i.second;
		}
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	solve();
	}

	return 0;
}