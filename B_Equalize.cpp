#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	//vector<int> nums;
	map<int,int> count;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		//nums.pb(x);
		count[x]++;
	}	
	//sort(nums.begin(), nums.end());
	vector<int> newNums;
	
	for(auto i: count){
		newNums.pb(i.first);
	}

	int cnt=0,maxi=INT_MIN;
	int i=0;
		for(int j=0; j<newNums.size(); j++){
			int temp=abs(newNums[i]-newNums[j]);
			if(temp>=n) {
				i++;
			}
			cnt=j-i+1;
			maxi=max(maxi,cnt);
		}	
	//if(cnt==0) cnt++;
	cout<<maxi<<endl;
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