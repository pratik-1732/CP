#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a;
	vector<int> b;
	vector<int> asum;
	vector<int> bmax;
	
	int suma=0;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		
		suma+=x;
		a.pb(x);
		asum.pb(suma);
	}
	int ma=INT_MIN;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		ma=max(ma,x);
		b.pb(x);
		bmax.pb(ma);
	}
	
	int maxi=INT_MIN;
	int cnt=k; int sum=0;
	if(k<=n){	
		while(cnt>0){
			sum=0;
			int x= asum[cnt-1];
			int y= bmax[cnt-1]*(k-cnt);
			sum+=(x+y);
			//cout<<x<<" "<<y<<" "<<sum<<endl;
			maxi= max(maxi,sum);
			cnt--;
		}
	}
	else{
		int a= asum[n-1];
		int b= bmax[n-1];
		sum+= (a+(b*(k-n)));
		maxi= max(maxi,sum);
		cnt=n;
		while(cnt>0){
			sum=0;
			int x= asum[cnt-1];
			int y= bmax[cnt-1]*(k-cnt);
			sum+=(x+y);
			//cout<<x<<" "<<y<<" "<<sum<<endl;
			maxi= max(maxi,sum);
			cnt--;
		}
	}
	cout<<maxi<<endl;
	
	// int maxi=INT_MIN;
	// //int sum=0;
	// int temp=INT_MIN,cnt=k;
	// while(cnt>0){
	// 	sum=0; temp=INT_MIN;
	// 	for(int i=0; (i<cnt && i<n); i++){
	// 		sum+=a[i];
	// 	}
	// 	//cout<<sum<<" ";
	// 	for(int i=0; (i<cnt && i<n); i++){
	// 		temp=max(temp,b[i]);
	// 	}
	// 	//cout<<temp<<" ";
	// 	sum+=(temp*(k-cnt));
	// 	//cout<<sum<<endl;
	// 	maxi=max(maxi,sum);
	// 	cnt--;
	// }
	// //cout<<endl;
	// cout<<maxi<<endl;
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