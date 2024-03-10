#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> count;
	for(int i=1; i<=26; i++){
		count.pb(i);
	}
	
	for(int i=0; i<n; i++){
		count[s[i]-'A']--;
	}

	int cnt=0;
	for(auto i: count){
		if(i<=0) cnt++;
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