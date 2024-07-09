#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,s; cin>>n>>s;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
	int maxi=INT_MIN;
	int j=0, sum=0; 
	int cnt=0;
	for(int i=0; i<n; i++){
		sum+=nums[i];
		if(sum<=s) {
			maxi=max(maxi, i-j+1);
			cnt+=i-j+1;
		}
		else{
			while(sum>s){
				sum-=nums[j];
				j++;
			}
			if(sum<=s) {
				maxi=max(maxi, i-j+1);
				cnt+=i-j+1;
			}
		}
	}	
	cout<<cnt<<endl;
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