#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	//vector<pair<string, int>> mail;
	map<string, int> id;
	while(n--){
		string s; cin>>s;
		if(id.find(s)!=id.end()) {
			id[s]++;
			int x=id[s]; x--;
			cout<<s<<x<<endl;
			//cout<<s<<endl;
		}
		else{
			id[s]++;
			cout<<"OK"<<endl;
		}	
	}
	// for(auto i: id){
	// 	cout<<i.first<<i.second<<endl;
	// }
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