#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int arr[200005];
void solve(){
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>arr[i];
	int a=0,b=0;
	for(int i=1;i<=n;i++)
	{
		if(a<k)
		{
			if(arr[i]==arr[1]) a++;
		}
		else if(arr[i]==arr[n]) b++;
	}
	if(arr[1]==arr[n])
	{
		if(a>=k) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else
	{
		if(a>=k&&b>=k) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
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