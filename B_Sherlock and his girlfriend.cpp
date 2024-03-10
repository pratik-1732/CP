#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

bool isPrime(int x){
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0) return false;
	}
	return true;
}
void solve(){
	int n; cin>>n;
	vector<int> ans;
	int cnt=0, k=2;
	for(int i=2; i<=n+1; i++){
		if(isPrime(i)){
			ans.pb(1);
			cnt++;
		}
		else{
			ans.pb(k);
			
		}
	}
	map<int, int> mp;
	for(auto i: ans){
		mp[i]++;
	}
	cout<<mp.size()<<endl;
	for(auto i: ans){
		cout<<i<<" ";
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