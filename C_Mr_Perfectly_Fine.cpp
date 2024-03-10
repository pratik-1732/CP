#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t solve(){
	int n; cin>>n;
	vector<pair<int, string>> temp;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		string s; cin>>s;
		temp.pb(make_pair(x,s));
	}
	vector<int> minutes11;
	vector<int> minutes10;
	vector<int> minutes01;
	for(auto i: temp){
		//cout<<i.first<<" "<<i.second<<endl;
		if(i.second == "11") minutes11.pb(i.first);
		if(i.second == "10") minutes10.pb(i.first);
		if(i.second == "01") minutes01.pb(i.first);
	}
	sort(minutes11.begin(),minutes11.end());
	sort(minutes10.begin(),minutes10.end());
	sort(minutes01.begin(),minutes01.end());
	//cout<<minutes11[0]<<" "<<minutes10[0]<<" "<<minutes01[0]<<endl;

	if((minutes01.empty() || minutes10.empty()) && minutes11.empty() ) return -1;

	if(minutes11.empty()){
		int ans=minutes01[0]+minutes10[0];
		return ans;
	}
	else if(minutes01.empty() || minutes10.empty()){
		return minutes11[0];
	}
	else{
		int ans=minutes01[0]+minutes10[0];
		int mini=min(ans,minutes11[0]);
		//cout<<ans<<" "<<mini<<endl;
		return mini;
	}

}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	int ans =solve();
	cout<<ans<<endl;
	}

	return 0;
}