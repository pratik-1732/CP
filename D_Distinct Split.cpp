#include<bits/stdc++.h>
using namespace std;

//#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string s; cin>>s;

	vector<int> cnt(26, 0), temp(26, 0);
    for(auto x: s) cnt[x - 'a']++;
    int ans = 0;
    for(auto x: s) {
        --cnt[x - 'a'];
        ++temp[x - 'a'];
        int cur = 0;
        for(int i = 0; i < 26; ++i) {
            cur +=min(1, cnt[i]) + min(1, temp[i]);
        }
        ans =max(ans, cur);
    }
    cout<<ans<<endl;


	// map<char, int> x;
	// map<char, int> y;
	// for(char ch='a'; ch<='z'; ch++){
	// 	x[ch]= 0;
	// 	y[ch]= 0;
	// }

	// for(auto i: s){
	// 	if(x[i]<1) x[i]++;
	// 	else if(y[i]<1) y[i]++;
	// }
	// int cnt=0;
	// for(auto i: x){
	// 	if(i.second==1) cnt++;
	// }
	// for(auto i: y){
	// 	if(i.second==1) cnt++;
	// }
	// cout<<cnt<<endl;
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