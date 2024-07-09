#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	sort(nums.begin(), nums.end());
	int a=0, b=0, cnt=0;
	for(int i=n-1; i>=0; i--){
		if(cnt==0){
			if(nums[i]%2==0) a+=nums[i];

			cnt++;
		}
		else if(cnt==1){
			if(nums[i]%2!=0) b+=nums[i];
			cnt--;
		}
	}
	if(a>b) cout<<"Alice"<<endl;
	else if(a<b) cout<<"Bob"<<endl;
	else cout<<"Tie"<<endl;
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