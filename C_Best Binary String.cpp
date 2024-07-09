#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='?') cnt++;
	}	
	if(cnt==0){
		cout<<s<<endl;
	}
	else{
		if(s[0]=='?') s[0]='0';
		for(int i=1; i<s.length(); i++){
			if(s[i]=='?') s[i]=s[i-1];
		}
		cout<<s<<endl;
	}
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