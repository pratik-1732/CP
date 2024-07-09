#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int solve(){
	int n; cin>>n; 
	vector<int> arr;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		arr.pb(x);
	}
	
	vector<int> temp;
	int l=arr.size();
    for(int i=0; i<l; i++){
        if(((n-i)*(i+1))%2!=0){
            temp.push_back(arr[i]);
        }
    }
    
    int ans=0;
    for(int i=0; i<temp.size(); i++){
        ans=ans^temp[i];
    }
    // for(auto i: temp){
    // 	cout<<i<<" ";
    // }
     return ans;
    
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin>>t;
	while(t--){
	cout<<solve()<<endl;
	}
	return 0;
}