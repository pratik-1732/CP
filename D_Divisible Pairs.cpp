#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,x,y; 
	cin>>n>>x>>y;
	//vector<int> arr(n);
	vector<pair<int,int>> Marr;
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		Marr.pb(make_pair(a%x, a%y));

	}
	int temp=0;
	map<pair<int,int>, int> mp;
	for(auto i: Marr){
		int a=(x-i.first)%x;
		//int b=(y+i.second)%y;
		int b=i.second;
		temp+= mp[{a,b}];
		 mp[i]++;
	}
	cout<<temp<<endl;	
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