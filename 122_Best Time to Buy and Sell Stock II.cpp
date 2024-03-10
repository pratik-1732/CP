#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int32_t solve(vector<int> temp){
	int n=temp.size(); 
	int purchase;
	int diff=0; 
	vector<int> ans;
	for(int i=0; i<n; i++){
		if(i+1>=n || i+2>=n) break;
		if(temp[i]>=temp[i+1] && temp[i+1]<temp[i+2]){
			purchase=temp[i+1];
			cout<<purchase<<endl;
			int k=i+2;
			while(k<n){
				diff=0;
				if(k+1<n && temp[k]>=temp[k+1]){
					diff=abs(temp[k]-purchase);
					ans.pb(diff);
					
					break;
				}
				k++;
			}
		}
		else{
			purchase=temp[i];
			cout<<purchase<<endl;
			int k=i+1; int x; diff=0;
			while(k<n){
				if(k+1<n && temp[k]<=temp[k+1]){
					x=temp[k+1];

				}
				k++;
			}
			i+=k+1;
			diff=abs(x-purchase);
					ans.pb(diff);
		}
	}
	for(auto i: ans){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
		int n; cin>>n;
		vector<int> temp;
		for(int i=0; i<n; i++){
			int x; cin>>x;
			temp.pb(x);

		}
	int ans=solve(temp);
	cout<<ans<<endl;
	}
	return 0;
}