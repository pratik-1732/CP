#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

vector<int> cubes(1e4);
bool isPresent(vector<int> cubes, int ans){
	int l=0, r=cubes.size()-1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(mid==0) return false;
		
		if(cubes[mid]==ans) {
			return true;
		}
		else if(cubes[mid]>ans) r=mid-1;
		else l=mid+1;
	}
	return false;
}
bool alreadyPresent(vector<int> already, int x){
	for(auto i: already){
		if(i==x) return true;
	}
	return false;
}
void solve(){
	int x;
	cin>>x;	
	// vector<int> already;
	// bool tem=alreadyPresent(already,x);
	// if(tem){
	// 	cout<<"YES"<<endl;
	// 	return;
	// }
	// vector<int>:: iterator it;
	// it =upper_bound(cubes.begin(), cubes.end(), x);
	// int temp=*it;
	// int len= cbrt(temp);
	
	// for(int i=1; i<=len; i++){
	// 	int ans=x-cubes[i];
	
	// 	bool output= isPresent(cubes, ans);
	// 	if(output){
	// 		cout<<"YES"<<endl;
	// 		already.pb(x);
	// 		return;
	// 	}
	// }
	// cout<<"NO"<<endl;
	for(int i=1; i<cubes.size(); i++){
		double b= (double) cbrt(x-cubes[i]);
		int a=b;
		double temp=b-a;
		if(b<=0) break;
		if(temp>0) continue;
		else {
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	for(int i=1; i<=10000; i++){
		int x=i; x*=i;
		x*=i;
		//if(x>1e12) break;
		cubes[i]=x;
	}
	cout<<endl;
	while(t--){
	solve();
	}

	return 0;
}