#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void factor(int x, map<int, int> &count){
	//vector<int> v; 
	while(x%2==0){
		count[2]++;
		x/=2;
	}
	for(int i=3; i<=sqrt(x); i+=2){
		// if(x==0) break;

		while(x%i==0){
			//v.pb(i);
			count[i]++;
			x/=i;
		}
	}
	if(x>2) count[x]++;
	// int i=2;
	// while(i*i<=x){
	// 	while(x%i==0){
	// 		count[i]++;
	// 		x/=i;
	// 	}
	// 	i++;
	// }
	// if(x>1) count[x]++;
}
bool solve(){
	int n; cin>>n;
	vector<int> nums(n);
	// int cnt=0;
	for(auto &i: nums) {
		cin>>i;
		// if(i==1) cnt++;
	}
	//if(n==1 || cnt==n) return true;
	
	map<int, int> count;
	for(auto i: nums){
		// if(i==1) continue;
		factor(i, count);
	}
	if(count.size()==1){
		for(auto i: count){
			if(i.second%n==0) return true;
			else return false;
		}
	}
	// for(auto i: count){
	// 	cout<<i.first<<" "<<i.second<<", ";
	// }
	for(auto i: count){
		if(i.second%n!=0) return false;
	}
	return true;

	// for(auto i: nums){
	// 	if(i==1) continue;
	// 	vector<int> temp;
	// 	temp= factor(i);
	// 	for(auto j: temp) count[j]++;
	// }
	
	// if(count.size()==1){
	// 	for(auto i: count){
	// 		int l= i.second;
	// 		if(l%n!=0){
	// 			cout<<"NO"<<endl;
	// 			return;
	// 		}
	// 		else{
	// 			cout<<"YES"<<endl;
	// 			return;
	// 		}
	// 	}
	// }
	// for(auto i: count){
	// 	if(i.second!=n){
	// 		cout<<"NO"<<endl;
	// 		return;
	// 	}
	// }
	//cout<<"YES"<<endl;

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