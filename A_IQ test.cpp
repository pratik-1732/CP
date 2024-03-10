#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
     int n, evenCounter = 0, oddCounter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCounter++;
        }
        else {
            oddCounter++;
        }
    }
    if (evenCounter > oddCounter) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                cout << i + 1 << endl;
                return ;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                cout << i + 1 << endl;
                return ;
            }
        }
    }
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