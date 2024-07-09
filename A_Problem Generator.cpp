#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,m; cin>>n>>m;
	string s; cin>>s;
	map<char, int> count;
	for(char ch='A'; ch<'H'; ch++ ) count[ch]=0;
	for(auto i: s) count[i]++;
	int cnt=0;
	for(auto i: count){
		if(i.second<m) {
			cnt+=(m-i.second);
			//cout<<i.first<<" "<<i.second;
		}
	}
	cout<<cnt<<endl;
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