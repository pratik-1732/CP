#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool comp(pair<int, int>a, pair<int, int>b){
	if(a.first>b.first) return true;
	else if(a.first<b.first) return false;
	else{
		if(a.second>b.second) return false;
		else return true;
	}
}
int32_t count(vector<pair<int,int>> monster){
	int cnt=0;
	for(auto i: monster){
		if(i.first<=0) cnt++;
	}
	return cnt;
}
void solve(){
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> monster;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		if(x>k ){
		  if(x%k!=0) 
			x=x%k;
		 else x=k;
		}
		monster.pb(make_pair(x,i+1));
	}
	int cnt=0;
	vector<int> index;
	// for(auto& i: monster){
	// 	if(i.first>k) i.first=i.first%k;
	// }
	sort(monster.begin(), monster.end(), comp);
	// for(auto i: monster){
	// 	cout<<i.first<<" "<<i.second<<endl;
	// }
	// cout<<endl;
	// for(int i=n-1; i>=0; i--){
	// 	int comp=monster[i].first;
	// 	if(i-1>=0 && comp!=monster[i-1].first) {
	// 		monster[i].first-=k;
	// 		index.pb(monster[i].second);
	// 	}
	// 	else{
	// 		int ind=i; vector<int> arr; 
	// 		while(ind>=0 && monster[ind].first==comp){
	// 			arr.pb(monster[ind].second);
	// 			ind--;
	// 		}
	// 		sort(arr.begin(), arr.end());
	// 		int l=arr.size();
	// 		i-=l;
	// 		for(auto j: arr){
	// 			index.pb(j);
	// 		}
	// 	}
	// }
	// for(auto i: index){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	for(auto i: monster){
		cout<<i.second<<" ";
	}
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