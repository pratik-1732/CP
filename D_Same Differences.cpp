#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	for(auto &i: a) cin>>i;

	map<int, int> temp;
	int j=1;
	for(int i=0; i<n; i++){
		temp[a[i]-j]++;
		j++;
	}
	
	int cnt=0;
	for(auto i: temp){
		int y= i.second;
		//cout<<y<<" ";
		if(y>1){
			if(y%2==0){
				int x=y/2;
				x*=(y-1);
				cnt+=x;
			}
			else{
				int x= (y-1)/2;
				x*=y;
				cnt+=x;
			}
		}
	}
	cout<<cnt<<endl;
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