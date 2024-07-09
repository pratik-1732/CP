#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
	sort(nums.begin(), nums.end());
	map<int, int> unique;
	for(auto i: nums){
		unique[i]++;
	}
	// for(auto it=unique.begin(); it!=unique.end(); it++){
	// 	cout<<*it<<" ";
	// }

	auto itr=unique.begin();
	int a=itr->first; itr++;
	int b=itr->first;
	auto litr=unique.end(); litr--;
	int x=litr->first; litr--;
	int y=litr->first;

	int maxi=0;
	if(unique.size()>2){
		int temp1= abs(x-a)+abs(x-y);
		int temp2= abs(a-x)+abs(a-b);
		int temp3= abs(y-a)+abs(y-x);
		int temp4= abs(b-a)+abs(b-x);
		maxi= max(temp1, temp2);
		maxi= max(maxi, temp3);
		maxi= max(maxi, temp4);
	}
	else if(unique.size()==2){
		auto it = unique.begin();
		int a=it->second; int x=it->first;
		it++;
		int b=it->second; int y=it->first;
		if(a>=2 && b>=2){
			int ans= abs(x-y)+ abs(x-y);
			maxi=max(ans, maxi);
		}
	}
	cout<<maxi<<endl;	
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