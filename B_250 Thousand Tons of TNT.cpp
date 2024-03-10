#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

vector<int> factors(int n){
	vector<int> ans;
	for(int i=2; i<n; i++){
		if(n%i ==0) ans.pb(i);
	}
	return ans;
}
void solve(){
	int n; cin>>n;
	vector<int> wts;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		wts.pb(x);
	}
	vector<int> diff;
	vector<int> fact = factors(n);
	int l=fact.size(); int k=0;

	while(l>0){
		vector<int> sum;
		int temp=0; int it=fact[k];
		for(int i=0; i<n; i+=it){
			temp=0;
			for(int j=i; j<i+it;  j++){
				temp+=wts[j];
			}
			
			sum.pb(temp);
		}
		
		sort(sum.begin(), sum.end());
			
		int di=abs(sum[0]-sum[sum.size()-1]);
		diff.pb(di);
		k++;
		l--;
	}
	sort(wts.begin(),wts.end());
	int x= abs(wts[0]-wts[wts.size()-1]);
	diff.pb(x);

	int maxi=INT_MIN;
	for(auto i: diff){
		//cout<<i<<" ";
		maxi=max(maxi,i);
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