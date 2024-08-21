#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	vector<int> preSum;
	int sum=0;
	for(auto i: nums){
		sum+= i;
		preSum.pb(sum);
	}
	int weeks= n-k+1;
	double ans= 0.00;
	int j=0;
	vector<int> tempPreSum= preSum;
	for(int i=k; i<n; i++){
		// ans+= (double)(preSum[i]/weeks);
		if(j>=n) break;
		tempPreSum[i]-= preSum[j];
		j++;
	}
	for(int i=k-1; i<n; i++){
		// cout<<tempPreSum[i]<<" ";
		ans+= ((double)tempPreSum[i]/weeks);
	}
	cout<<setprecision(12);
	cout<<ans<<endl;
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