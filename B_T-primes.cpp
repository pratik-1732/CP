#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

// bool isprime(int x){
// 	//int cnt=0;
// 	for(int i=2; i<=sqrt(x); i++){
// 		if(x%i==0) return false; 
// 	}
// 	return true;

// }
// void solve(){
// 	int n; cin>>n;
// 	vector<int> nums;
// 	for(int i=0; i<n; i++){
// 		int x; cin>>x;
// 		nums.pb(x);
// 	}	
// 	for(auto i: nums){
// 		int temp=sqrt(i);
// 		if(temp*temp==i && isprime(temp) &&  i!=1) cout<<"YES"<<endl;
// 		//if(temp*temp==i && i!=1) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;
// 	}
// }

bool prime[1000001];

void solve(){
	int n; cin>>n;
	vector<int> nums;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		nums.pb(x);
	}	

	for(int i=2; i<=1e6; i++){
		prime[i]=1;
	}
	prime[0]=0; prime[1]=0;
	for(int i=2; i*i<=1e6; i++){
		if(prime[i]){
			for(int j=i*i; j<=1e6; j+=i){
				prime[j]=0;
			}
		}
	}
	map<int, int> check;
	for(int i=2; i<=1e6; i++){
		if(prime[i]){
			int x=i*i;
			check[x]=1;
		}
	}

	for(auto i: nums){
		if(check.find(i)!=check.end()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
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