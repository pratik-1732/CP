#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n;
    cin >> n;
    int arr[n];
    set<pair<int, int>> st;
    st.insert({n, 0});
    int x = 1;
    while(!st.empty()) {
        auto it1 = (--st.end());
        auto it = st.lower_bound({it1->first, -1}); 
        int k = it->second + (it->first - 1) / 2;
        arr[k] = x;
        x++;
        if (it->second < k) {
            st.insert({(k-(it->second)),it->second});
        }
        if(it->second+it->first-1>k){
            st.insert({(it->first)/2,k + 1});
        }
        st.erase(it);
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
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