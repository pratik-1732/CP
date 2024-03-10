#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int index(vector<pair<string, int>> teacher, string s){
	for(int i=0; i<teacher.size(); i++){
		if(teacher[i].first==s) return i;
	}
}
void solve(){
	int n,m;
	cin>>n>>m;
	vector<pair<string, int>> teacher;
	vector<pair<string, int>> lang;
	vector<string> given;

	for(int i=0; i<m; i++){
		string s1; cin>>s1;
		int len1=s1.length();
		teacher.pb(make_pair(s1,len1));

		string s2; cin>>s2;
		int len2=s2.length();
		lang.pb(make_pair(s2,len2));	
	}
	for(int i=0; i<n; i++){
		string s; cin>>s;
		given.pb(s);
	}
	vector<string> ans;
	for(int i=0; i<n; i++){
		int len=given[i].length();
		string s=given[i];
		int ind=index(teacher, s);
		//cout<<ind<<" ";
		if(lang[ind].second<len) ans.pb(lang[ind].first);
		else ans.pb(s);
	}
	for(auto i: ans){
		cout<<i<<" ";
	}
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