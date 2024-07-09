#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int temp=nums[0];
	vector<int> v;
	for(int i=1; i<n; i++){
		if(nums[i]<temp){
			v.pb(temp-nums[i]);
		}
		else temp=nums[i];
	}
	if(v.size()==0){
		cout<<0<<endl;
		return;
	}
	sort(v.begin(), v.end());
	// for(auto i: v) cout<<i<<" ";
	int cnt=0;
	int len= v.size();
	cnt+=(len+1)*v[0];
	int x=len-1;
	int prev=v[0];
	for(int i=1; i<len; i++){
		cnt+=((x+1)*(v[i]-prev));
		prev=v[i];
		x--;
	}
	// while(v.size()>0){
	// 	sort(v.begin(), v.end());
	// 	int mini= v[0];
	// 	int len=v.size();
	// 	// cout<<mini<<" "<<len<<endl;
	// 	cnt+=((len+1)*mini);

	// 	vector<int>::iterator it;
 //    	it = v.begin();
 //    	v.erase(it);
 //    	for(auto &i: v) i-=mini;
	// }
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