#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int n;
        cin>>n;
        string st;
        cin>>st;int j, ans=0,count=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='(')
            count++;
            else
            {
                if(count>0)
                    count--;
                else ans++;}
 
        }
         cout<<ans<<endl;
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