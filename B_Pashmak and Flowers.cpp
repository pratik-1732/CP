#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

// int factorial(int x){
// 	if(x==0) return 1;
// 	return x*factorial(x-1);
// }
void solve(){
	int n; cin>>n;
	vector<int> nums;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		nums.pb(x);
	}
	sort(nums.begin(), nums.end());
	
	int x=nums[0];
	int y=nums[n-1];
	int cnt1=0,cnt2=0;
	for(auto i: nums){
		if(i==x) cnt1++;
		else if(i==y) cnt2++;
	}
	int temp;
	if(cnt2==0) {
		cnt2=1;
		//int temp=factorial(cnt1)/(factorial(cnt1-2)*2);
		//cnt1=temp;
		
		if(cnt1%2==0)
			temp=(cnt1/2)*(cnt1-1);
		else
			temp=cnt1*((cnt1-1)/2);

		cnt1=temp;
	}
	cout<<nums[n-1]-nums[0]<<" "<<cnt1*cnt2<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	solve();
	}
	return 0;
}