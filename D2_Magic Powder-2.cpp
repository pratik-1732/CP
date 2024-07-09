#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int32_t solve(){
	int n,k; cin>>n>>k;
	vector<int> a(n);
	vector<int> b(n);
	for(auto &i: a) cin>>i;
	for(auto &i: b) cin>>i;

	int right=INT_MIN;
	for(int i=0; i<n; i++){
		right= max(right, (b[i]+k)/a[i]+1);
	}
	int l=0, r=right, mid, ans=INT_MIN;
	while(l<=r){
		mid= l+(r-l)/2;
		int temp=0;
		for(int i=0; i<n; i++){
			if(a[i]*mid>b[i]) {
				temp+=(a[i]*mid)-b[i];
				if(temp>k) break;
			}
		}

		//cout<<mid<<" "<<temp<<endl;

		if(temp<=k) {
			ans= max(ans, mid);
			l=mid+1;
		}
		else  r=mid-1;
	}
	return ans;


	// int mini=INT_MAX, cnt=0;
	// for(int i=0; i<n; i++){
	// 	int x= b[i]/a[i];
	// 	mini= min(mini, x);
	// }
	// cnt+=mini;
	// for(int i=0; i<n; i++){
	// 	b[i]-=(a[i]*mini);
	// }

	// while(k>0){
	// 	// for(auto i: b) cout<<i<<" ";
	// 	// cout<<endl;
	// 	// cout<<k<<endl;
	// 	for(int i=0; i<n; i++){
	// 		//b[i]-=(a[i]*mini);

	// 		if(b[i]<a[i]){
	// 			int temp= a[i]-b[i];
	// 			if(k>0 && k>=temp){
	// 				k-=temp;
	// 				b[i]+=temp;
	// 			}
	// 			else break;
	// 		}
	// 	}	
	// 	int count=0;
	// 	for(int i=0; i<n; i++){
	// 		if(b[i]>=a[i]){
	// 			b[i]-=a[i];
	// 			count++;
	// 		}
	// 		else {
	// 			cout<<cnt<<endl;
	// 			return;
	// 		}
	// 	}
	// 	if(count==n) cnt++;
	// }
	// cout<<cnt<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	int ans= solve();
	cout<<ans<<endl;
	}
	return 0;
}