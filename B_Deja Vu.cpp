#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

// int maxElement(vector<int> a){
// 	int temp;
// 	sort(a.begin(), a.end());
// 	temp=a[a.size()-1];
// 	return temp;
// }
void solve(){
	int n,q; cin>>n>>q;
	vector<int> a(n);
	vector<int> x(q);
	for(auto &i: a) cin>>i;
	for(auto &i: x) cin>>i;

	//sort(x.begin(), x.end());	
	
	//int maxi=maxElement(a);
	int mini=x[0]; mini++;
	for(auto i: x){
		if(i>=mini) continue;
		else{
			mini=i;
			int temp= pow(2,i);
			//if(temp>maxi) continue;
			
			for(auto &j: a){
				if(j%temp==0) j+=(temp/2);
			}	
		}
	}
	for(auto i: a) cout<<i<<" ";

	cout<<endl;
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