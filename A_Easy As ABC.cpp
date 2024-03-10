#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	vector<string> str;
	for(int i=0; i<3; i++){
	string s; cin>>s;
	str.pb(s);
	}
	
	map<string,int> count;
	for(int i=0; i<3; i++){
		//cout<<i<<endl;
		string s=str[i];
		for(int j=0; j<3; j++){
			string temp;
			temp+=s[j];
		}
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