#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t solve(){
	int n; cin>>n;
	vector<int> temp;
	vector<int> count;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		temp.pb(x);
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		cnt=0;
		if(temp[i]==1) continue;
		else{
			cnt++;
			for(int j=i+1; j<n; j++){
				if(temp[j]==1) break;
				else cnt++;
			}
			count.pb(cnt);
		}
	}

	if(count.size()==0) return 0;
	int maxi=INT_MIN;
	for(auto i: count){
		//cout<<i<<" ";
		maxi=max(maxi,i);
	}
	return maxi;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	int ans=solve();
	cout<<ans<<endl;
	}

	return 0;
}