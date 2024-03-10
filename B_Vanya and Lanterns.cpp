#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	 int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double mx = a[0];
    for (int i = 1; i < n; ++i) {
        mx = max((a[i] - a[i - 1])/2.0, mx);
    }
    mx = max(double(l - a[n - 1]), mx);
    cout << fixed << mx << endl;
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