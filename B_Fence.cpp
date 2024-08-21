#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int x=0;
	int last= nums[x], sum=0;
	for(int i=0; i<k; i++){
		sum+= nums[i];
	}
	
	int mini= sum, ind= k-1;
	for(int i= k; i<n; i++){
		x++;
		sum-= last;
		sum+=nums[i];
		if(sum<mini){
			mini= sum;
			ind=i;
		}
		last= nums[x];
		//cout<<sum<<" "<<last<<" "<<ind<<endl;
	}
	cout<<ind-k+2<<endl;
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