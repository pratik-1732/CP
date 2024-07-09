#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,s; cin>>n>>s;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	vector<int> sufSum;
	int sum=0;
	for(int i=n-1; i>=0; i--){
		sum+=nums[i];
		sufSum.pb(sum);
	}	
	reverse(sufSum.begin(), sufSum.end());
	
	int mini=0;
	int l=0;  sum=0;
	for(int i=0; i<n; i++){
		// if(sufSum[i]>=s){
		// 	mini=min(mini, n-i);
		// 	int j=n-1;
		// 	while(i<j){
		// 		if(sufSum[i]-sufSum[j]>=s){
		// 			mini=min(mini, j-i);
		// 			j--;
		// 		}
		// 		else break;
		// 	}
		// }
		// else break;

		sum+=nums[i];
		if(sum>=s){
			while(sum-nums[l]>=s){
				sum-=nums[l];
				l++;
			}
			if(sum>=s){
				mini+=l+1;
			}
		}
	}
	if(mini==INT_MAX) cout<<-1<<endl;
	else cout<<mini<<endl;
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