#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	string str="codeforces";
	int cnt=0;
	for(int i=0; i<10; i++){
		if(s[i]!=str[i]) cnt++;
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