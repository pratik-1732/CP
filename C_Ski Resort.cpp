#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int solve(){
	int n,k,q;
	cin>>n>>k>>q;
	vector<int> a; int cnt=0;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		a.pb(x);
	}

	vector<int> count;
	int temp=0;
	for(auto i: a){
		if(i<=q) temp++;
		else{
			if(temp>=k){
				count.pb(temp);

			}
			temp=0;
		}
	}
	if(temp>=k)
	count.pb(temp);

	for(auto i: count){
		//cout<<i<<" ";
		 int l=i; int t=k;
		// while(t<=l){
		// 	cnt+=(l-t+1);
		// 	t++;
		// }
		 int temp=i-k+1;
		 if(temp>=1){
		 	cnt+=(temp*(temp+1))/2;
		 }
		
	}
	return cnt;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	int ans =solve();
	cout<<ans<<endl;
	}

	return 0;
}	