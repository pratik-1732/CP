#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

//vector<int> dp(1e8);

int minDigit(int x){
	int ans=INT_MAX;
	while(x!=0){
		int temp= x%10;
		ans= min(temp,ans);
		x/=10;
	}
	return ans;
}
int maxDigit(int x){
	int ans=INT_MIN;
	while(x!=0){
		int temp= x%10;
		ans= max(temp,ans);
		x/=10;
	}
	return ans;
}
void solve(){
	int a,k;
	cin>>a>>k;
	// vector<int> dp(k+2);
	// dp[0]=0; dp[1]=a;
	// for(int i=2; i<=k; i++){
	// 	dp[i]=dp[i-1]+(minDigit(dp[i-1])*maxDigit(dp[i-1]));

	// 	if(minDigit(dp[i-1])==0 || maxDigit(dp[i-1])==0){
	// 		cout<<dp[i]<<endl;
	// 		return;
	// 	}
	// }
	// cout<<dp[k]<<endl;

	int lastNo=a, ans=a;
	for(int i=1; i<k; i++){
		int temp= minDigit(lastNo)*maxDigit(lastNo);
		ans= lastNo+temp;
		lastNo=ans;
		if(temp==0) break;
	}
	cout<<ans<<endl;
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