#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	map<int,int> divisors;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		divisors[x]++;
	}	
	//sort(divisors.begin(), divisors.end());
	
	auto it=divisors.end();
	it--;
	int temp=it->first;
	it->second--;
	
	for(auto itr=divisors.begin(); itr!=divisors.end(); itr++){
		if(temp%(itr->first)==0 && itr->first!=temp) itr->second--;
	}
	
	vector<int> remen;
	for(auto i: divisors){
		if(i.second!=0 && i.second!=-1) remen.pb(i.first);
	}
	sort(remen.begin(), remen.end());
	
	cout<<temp<<" "<<remen[remen.size()-1]<<endl;
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