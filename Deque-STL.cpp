#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int maxiElement(deque<int> dq){
	sort(dq.begin(), dq.end());
	return dq[dq.size()-1];
	// int maxi=INT_MIN;
	// for(int i=0; i<dq.size(); i++){
	// 	maxi=max(maxi, dq[i]);
	// }
	// return maxi;
}
void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	deque<int> dq;
	int maxi=INT_MIN;
	int temp=k;
	int i=0;
	while(temp--){
		dq.pb(nums[i]);
		maxi=max(maxi, nums[i]);
		i++;
	}
	vector<int> ans;
	ans.pb(maxi);
	for(i; i<n; i++){
		int j=dq.front();
		dq.pop_front();
		dq.pb(nums[i]);
		//auto maxEle = max_element(dq.begin(), dq.end());
		if(nums[i]>maxi){
			maxi=nums[i];
			ans.pb(nums[i]);
		}
		else{
			if(j==maxi){
				int x=maxiElement(dq);
				ans.pb(x);
				maxi=x;
			}
			else{
				ans.pb(maxi);
			}
		}
	}
	for(auto i: ans) cout<<i<<" ";

	cout<<endl;
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