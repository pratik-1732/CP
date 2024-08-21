#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string s; cin>>s;

	int a=0, b=0, c=0, d=0, x=0;

	map<char, int> count;
	for(auto i: s) count[i]++;

	int cnt=0;
	for(auto i: count){
		if(i.first!='?'){
			if(i.second>=n) cnt+=n;
			else cnt+= i.second;
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