#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int n;
        cin >> n;

        bool possible = false;
        for (int i = 0; i * 2020 <= n; i++) {
            if ((n - i * 2020) % 2021 == 0) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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