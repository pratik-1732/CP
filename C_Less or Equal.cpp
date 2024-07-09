#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	sort(nums.begin(), nums.end());
	if(k==0) {
		if(nums[0]>1)
			cout<<1<<endl;
		else 
			cout<<-1<<endl;
	}
	else if(k!=n) {
		int a= nums[k-1], b=nums[k];
		if(a==b) cout<<-1<<endl;
		else if(b==a+1) cout<<a<<endl;
		else cout<<a+1<<endl;
	}
	else{
		cout<<nums[k-1]<<endl;
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