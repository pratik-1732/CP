#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool solve(){
	int n; cin>>n;
	vector<int> nums(n+1,0);
	vector<int> modify(n+1,0);
	
	for(int i=1; i<=n; i++){
		int x; cin>>x;
		nums[i]=x;
		if(i%2==0) {
			modify[i]=(0-x);
		}
		else {
			modify[i]=x;
		}
	}
	vector<int> preSum(n+1, 0);
	int sum=0;
	for(int i=1; i<=n; i++){
		sum+=nums[i];
		preSum[i]=sum;
	}
	vector<int> modifyPreSum(n+1, 0);
	sum=0;
	for(int i=1; i<=n; i++){
		sum+=modify[i];
		modifyPreSum[i]=sum;
	}


	//unordered_set<int> check;
	map<int, int> check;
	sum=0;
	for(int i=1; i<=n; i++){
		sum+= modify[i];
		//if(sum==0 || check.find(sum)!=check.end()) return true;

		//check.insert(sum);
		check[sum]++;
		if(check[sum]>1 || sum==0) return true;
	}
	return false;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	bool ans= solve();
	if(ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}

	return 0;
}