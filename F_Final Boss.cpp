#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool comp(pair<int, int>a, pair<int, int>b){
	if(a.first>b.first) return false;
	else if(a.first<b.first) return true;
	else{
		if(a.second>b.second) return true;
		else return false;
	}
}

void solve(){
	int h,n; cin>>h>>n;
	vector<int> a(n);	
	vector<int> c(n);
	int sum=0;
	for(auto &i: a) {
		cin>>i;	
		sum+=i;
	}
	for(auto &i: c) cin>>i;	

	if(h-sum<=0){
		cout<<1<<endl;
		return;
	}

	int l=0, r=1e12, ans;
	while(l<=r){
		int mid= l+(r-l)/2;
		int temp=0;
		for(int i=0; i<n; i++){
			int x= (mid-1)/c[i]+1;
			temp+=x*a[i];
			if(temp>h) break;
		}

		if(temp>=h){
			r=mid-1;
			ans= mid;
		} 
		else{
			l=mid+1;
		}
	}

	cout<<ans<<endl;



	// h-=sum;
	// if(h<=0){
	// 	cout<<1<<endl;
	// 	return;
	// }
	
	// vector<pair<int, int>> vp;
	// vector<int> num(n);
	// for(int i=0; i<n; i++){
	// 	num[i]=1;
	// }
	// int temp= (h/n)*10;
	// //temp= 1e5;
	// // for(auto i: num) cout<<i<<" ";

	// while(temp--){
	// 	for(int i=0; i<n; i++){
	// 		int x= num[i]+c[i];
	// 		vp.pb(make_pair(x,a[i]));
	// 		num[i]=x;
	// 	}
	// }
	// sort(vp.begin(), vp.end(), comp);
	// for(auto i: vp){
	// 	//cout<<i.first<<","<<i.second<<" ";
	// 	h-=i.second;
	// 	if(h<=0) {
	// 		cout<<i.first<<endl;
	// 		return;
	// 	}
	// }

	
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