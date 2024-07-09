#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int output(vector<int> &temp){
    int prev2=0;
    int prev=temp[0];
    for(int i=1; i<temp.size(); i++){
        int take= temp[i];
        if(i>1) take+=prev2;
        int notake= 0+prev;

        int curr= max(take, notake);
        prev2=prev;
        prev=curr;
    }
    return prev;
}

int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n= valueInHouse.size();
    if(n==1) return valueInHouse[0];
    vector<int> first;
    vector<int> last;
    for(int i=0; i<n-1; i++) first.push_back(valueInHouse[i]);
    for(int i=1; i<n; i++) last.push_back(valueInHouse[i]);
    int firstMoney= output(first);
    int lastMoney= output(last);

    return max(firstMoney, lastMoney);
}
void solve(){
	int n; cin>>n;
	vector<int> valueInHouse(n);
	for(auto &i: valueInHouse) cin>>i;

	cout<<houseRobber(valueInHouse)<<endl;
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