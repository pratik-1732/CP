#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	for(int i=0; i<s.length()-1; i++){
		string temp="";
		temp= s.substr(i,2);
		if(temp== "it"){
			cout<<"YES"<<endl;
			return;
		}
	}	
	cout<<"NO"<<endl;
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