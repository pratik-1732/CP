#include<bits/stdc++.h>
using namespace std;
                                                                    
#define int long long
#define pb push_back
                                                                    
 void solve(){
         int n ;
    cin >> n ;
    vector<int > v(n) , ara;
    for(auto &x : v){
        cin >> x ;
    }
    bool neg = 0 ;
    if(v[0] < 0) neg = 1;
    int mx = v[0] ;
    for(int i = 0 ; i < n ; i++){
        bool ok = 0 ;
        if(v[i] < 0) ok = 1 ;
        if(ok == neg){
            mx = max(mx,v[i]) ;
        }
        else{
            ara.pb(mx) ;
            mx = v[i] ;
            neg ^= 1 ;
        }
    }
    ara.pb(mx) ;
    int ans = 0 ;
    for(auto x : ara){
        ans += x ;
    }
    cout << ans << endl ;                                                               
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