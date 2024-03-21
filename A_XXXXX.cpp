#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,x; cin>>n>>x;
	vector<int> nums;
	vector<int> preSum;
	int sum=0;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		nums.pb(a);
		sum+=a;
		preSum.pb(sum);
	}
	vector<int> sufSum;
	int sum2=0;
	for(int i=n-1; i>=0; i--){
		sum2+=nums[i];
		sufSum.pb(sum2);
	}
	
	if(sum%x!=0) {
		cout<<n<<endl;
		return;
	}
	int maxi=INT_MIN;
	int temp=sum;
	int ans=n; int l=0;
	while(temp%x==0 && ans>0){
		temp-=preSum[l];
		ans--; l++;
	}
	
	if(temp%x!=0)  maxi=max(maxi, ans);
	
	temp=sum; l=0; ans=n;
	while(temp%x==0 && ans>0){
		temp-=sufSum[l];
		ans--; l++;
	}
	
	if(temp%x!=0)  maxi=max(maxi,ans);
	else  maxi= -1;


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