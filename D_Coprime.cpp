#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

//vector<pair<int,int>> coprimes[1001];
void solve(){
	int n; cin>>n;
	vector<int> nums;
	//nums.pb(1);
	for(int i=0; i<n; i++){
		int x; cin>>x;
		nums.pb(x);
	}
	vector<int> temp(1001,-1);
	for(int i=0; i<n; i++){
		temp[nums[i]]=i+1;
	}
	int maxi=-1;
	for(int i=0; i<1001; i++){
		if(temp[i]!=-1){
			for(int j=0; j<1001; j++){
				if(temp[j]!=-1){
					if(__gcd(i,j)==1) maxi=max(maxi,temp[i]+temp[j]);
				}
			}
		}
		
	}
	
	 cout<<maxi<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	// for(int i=1; i<=1000; i++){
	// 	for(int j=1; j<=1000; j++){
	// 		if(__gcd(i,j)==1){
	// 			coprimes[i].pb(make_pair(i,j));
	// 		}
	// 	}
	// }
	while(t--){
	solve();
	}

	return 0;
}