#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	int cnt=0;
	for(auto &i: nums) {
		cin>>i;
		if(i%2==0) cnt++;
	}
	if(cnt>0 && cnt!=n){
		cout<<2<<endl;
		return;
	}

	set<int> count;
	for(int i=1; i<57; i++){
		int x= pow(2,i);
		for(auto i: nums){
			int y= i%x;
			count.insert(y);
		}
		if(count.size()==2){
			cout<<x<<endl;
			return;
		}
		else count.clear();
	}


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