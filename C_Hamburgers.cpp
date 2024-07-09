#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	string s; cin>>s;
	vector<int> a(3);
	vector<int> b(3);
	for(auto &i: a) cin>>i;
	for(auto &i: b) cin>>i;

	int r; cin>>r;
	
	vector<int> c(3,0);
	for(auto i: s){
		if(i=='B') c[0]++;
		else if(i=='S') c[1]++;
		else c[2]++;
	}
	int mini= INT_MAX, cnt=0;
	for(int i=0; i<3; i++) {
		int temp= a[i]/c[i];
		mini= min(mini, temp);
	}
	cnt+=mini;
	for(int i=0; i<3; i++) {
		a[i]-=(c[i]*mini);
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