#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> wormCnt;

	int sum=0;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		sum+=x;
		wormCnt.pb(sum);
	}
	int m; cin>>m;
	vector<int> needed;
	for(int i=0; i<m; i++){
		int x; cin>>x;
		needed.pb(x);
	}

	int k=0;

	// while(k<m){
	// 	for(int i=0; i<n; i++){
	// 		if(needed[k]<=wormCnt[i]) {
	// 			cout<<i+1<<endl;
	// 			break;.0
	// 		}
	// 	}
	// 	k++;
 //    }
    while(k<m){
		int x=needed[k];
		auto itr= lower_bound(wormCnt.begin(), wormCnt.end(), x)-wormCnt.begin();
		// if(itr!=n)
		// 	cout<<++itr<<endl;
	 //    else
			cout<<++itr<<endl;
		
		k++;
    }
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