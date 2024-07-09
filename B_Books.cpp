#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,t;
	cin>>n>>t;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int temp=0; int maxi=0;
	int j=0;
	for(int i=0; i<n; i++){
		while(j<n && temp+nums[j]<=t){
			temp+=nums[j];
			j++;
		}
		maxi=max(maxi, j-i);
		temp-=nums[i];
	}

	cout<<maxi<<endl;
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