#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n; 
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	vector<int> check(n+1,0);
	check[nums[0]]++;
	for(int i=1; i<n; i++){
		if(nums[i]==n){
			if(check[nums[i]-1]!=0) check[nums[i]]++;
			else{
				cout<<"NO"<<endl;
				return;
			}
		}
		else if(check[nums[i]-1]!=0 || check[nums[i]+1]!=0){
			check[nums[i]]++;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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