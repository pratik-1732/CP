#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	int mini= INT_MAX;
	for(int one=0; one<=2; one++){
		for(int three=0; three<=1; three++){
			for(int six=0; six<=4; six++){
				for(int ten=0; ten<=2; ten++){
					int temp= 1*one+3*three+6*six+10*ten;
					if(temp<=n && (n-temp)%15==0){
						int ans= one+three+six+ten+(n-temp)/15;
						mini= min(mini, ans);
					}
				}
			}
		}
	}
	cout<<mini<<endl;
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