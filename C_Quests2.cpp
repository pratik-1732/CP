#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k; cin>>n>>k;
	vector<int> a(n);
	vector<int> b(n);

	vector<int> arr(n);
	vector<int> brr(n);

	int maxi=INT_MIN;
	int sum=0;

	for(int i=0; i<n; i++) {
		int x; cin>>x;
		sum+=x;
		a[i]=x; arr[i]=sum;
	}
	for(int i=0; i<n; i++) {
		int x; cin>>x;
		maxi= max(maxi, x);
		b[i]=x; brr[i]=maxi;
	}
	//for(int i=0; i<n; i++) cout<<brr[i]<<" ";
	int cnt=k;
	int ans= INT_MIN;
	if(k<=n){
		while(cnt>0){
			int x= arr[cnt-1], y= brr[cnt-1]*(k-cnt);
			int temp= x+y;
			ans= max(ans, temp);
			cnt--;
		}
		cout<<ans<<endl;
	}
	else{
		int x= arr[n-1], y= brr[n-1]*(k-n);
		int temp= x+y;
		ans= max(ans, temp);
		cnt=n;
		while(cnt>0){
			x=arr[cnt-1]; y= brr[cnt-1]*(k-cnt);
			// cout<<x<<" "<<y<<" ";
			temp= x+y;
			ans= max(ans, temp);
			// cout<<temp<<" "<<ans<<endl;
			cnt--;
		}
		cout<<ans<<endl;
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