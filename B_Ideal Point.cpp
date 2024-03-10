#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int n, k;
        cin >> n >> k;
        bool a = false, b = false;
        
        while (n--) {
            int l, r;
            cin >> l >> r;
            
            if (l == k) a = true;
            if (r == k) b = true;
        }
        
        if (a && b) cout << "YES"<<endl;
        else cout << "NO"<<endl;
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