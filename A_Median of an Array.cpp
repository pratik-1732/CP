#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	sort(nums.begin(), nums.end());
	int mid=n/2;
	if(n%2==0) mid--;
	int cnt=1; int temp=nums[mid];
	for(int i=mid+1; i<n; i++){
		if(nums[i]==temp) cnt++;
		else if(nums[i]>temp) break;
	}
	cout<<cnt<<endl;	
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