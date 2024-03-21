#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

//int temp[10000001];
int calc(int k){
	//temp[0]=0;
	int j=0;
	for(int i=19; i<=1e8; i++){
		int ans=0;
		int t=i;
		while(t!=0){
			if(ans>10) break;
			ans+=t%10;
			t/=10;
		}
		
		if(ans==10) {
			//temp[j]=i;
			j++;
		}
		if(j==k) return i;
	}
	return 0;	
}
void solve(){
	int k; cin>>k;
	cout<<calc(k)<<endl;
	// int ans=temp[k-1];
	// cout<<ans<<endl;
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