#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> city;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		city.pb(x);
	}
	//map<int,int> nearCity;
	vector<pair<int,int>> nearCity;
	nearCity.pb(make_pair(1,0));

	for(int i=1; i<n; i++){
		if(i+1>=n) break;

		int x=city[i]-city[i-1];
		int y=city[i+1]-city[i];
		if(y<x){
			nearCity.pb(make_pair(1,x));
		}
		else{
			nearCity.pb(make_pair(y,1));
		}
	}
	nearCity.pb(make_pair(0,1));
	vector<int> sumFwd;
	sumFwd.pb(0); int tempF=1;
	sumFwd.pb(tempF);
	for(int i=1; i<nearCity.size(); i++){
		tempF+=nearCity[i].first;
		sumFwd.pb(tempF);
	}

	vector<int> sumBkd;
	sumBkd.pb(0); int tempB=0;
	for(int i=1; i<nearCity.size(); i++){
		//cout<<nearCity[i].second<<" ";
		tempB+=nearCity[i].second;
		sumBkd.pb(tempB);
	}
	// cout<<endl;
	
	// for(auto i: nearCity){
	// 	cout<<i.first<<" "<<i.second<<"--";
	// }
	// cout<<endl;
	// for(auto i: sumBkd){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	int m; cin>>m;
	while(m--){
		int x,y; cin>>x>>y;
		if(y>x)
			cout<<sumFwd[y-1]-sumFwd[x-1]<<endl;
		else
			cout<<sumBkd[x-1]-sumBkd[y-1]<<endl;
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