#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
	int i=2,j=1;
	// if(n==k){
	// 	cout<<"YES"<<endl;
	// 	while(k--){
	// 		cout<<1<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// else if((n%2==0 && k%2==0) || (n%2==0 && k%2!=0)){
	// 	while(k>1){
	// 		if(n<=0) {
	// 			cout<<"NO"<<endl;
	// 			return;
	// 		}

	// 	//cout<<i<<" "<<n<<endl;
	// 		v.pb(i);
	// 		if(k==1) break;
	// 		n-=i;
	// 		 k--;
	// 	}
	// 	if(n%2==0 && n!=0){
	// 		v.pb(n);
	// 		cout<<"YES"<<endl;
	// 		for(auto k: v){
	// 			cout<<k<<" ";
	// 		}
	// 		cout<<endl;	
	// 	}
	// 	else{
	// 		cout<<"NO"<<endl;
	// 		return;
	// 	}
	// }
	// else{
	// 	while(k>1){
	// 		if(n<=0) {
	// 			cout<<"NO"<<endl;
	// 			return;
	// 		}

	// 		v.pb(j);
	// 		if(k==1) break;
	// 		n-=j;
	// 		 k--;
	// 	}
		
	// 	if(n%2!=0 && n!=0){
	// 		v.pb(n);
	// 		cout<<"YES"<<endl;
	// 		for(auto k: v){
	// 			cout<<k<<" ";
	// 		}
	// 		cout<<endl;	
	// 	}
	// 	else{
	// 		cout<<"NO"<<endl;
	// 		return;
	// 	}
	// }
	int temp=n-(k-1);
	int ans=n-(2*(k-1));
	if(temp>0 && temp%2!=0){
		cout<<"YES"<<endl;
		while(k>1){
			cout<<1<<" ";
			k--;
		}
		cout<<temp<<endl;
	}
	else if(ans>0 && ans%2==0){
		cout<<"YES"<<endl;
		while(k>1){
			cout<<2<<" ";
			k--;
		}
		cout<<ans<<endl;
	}
	else cout<<"NO"<<endl;
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