#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	//sort(nums.begin(), nums.end());
	double temp= 1e-6;
	double l= 0.00, r= 1e8;
	double ans=0.00;

	while(abs(l-r)>temp){
		double mid= l+(r-l)/2.0;
	 
		int cnt=0;
		for(auto i: nums){
			cnt+=(i/mid);
		}
		
		if(cnt<k) r=mid;
		else{
			ans=mid;
			l=mid;
		}
	}
	cout<<fixed<<setprecision(6)<<ans<<endl;
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