#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int facto[200002]={0};
int maxi= 998244353;

int factorial(int x){
	if(x==1) return 1;
	return x*factorial(x-1);
}

void solve(){
	string s; cin>>s;
	int n=s.length();

	vector<int> v;
	int cnt;
	for(int i=0; i<n; i++){
		cnt=1;
		while(i+1<n && s[i]==s[i+1]){
			cnt++;
			i++;
		}
		v.pb(cnt);
	}	
	

	int ans=0;
	for(auto i: v){
		if(i>1) ans+=(i-1);
		
	}
	cout<<ans<<" ";
	int temp=1;
	for(auto i: v){
		if(i>1){
			temp*= i;
			temp%=maxi;
		}
	}
	cout<<((facto[ans]%maxi)*(temp%maxi))%maxi<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	facto[0]=1, facto[1]=1;
	int temp=1;
	for(int i=2; i<200002; i++){
		temp*=i;
		temp%=maxi;
		facto[i]=temp;
	}
	while(t--){
	solve();
	}

	return 0;
}