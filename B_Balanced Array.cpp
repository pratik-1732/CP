#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    vector<int>v;
        int n;
        cin>>n;
        int j=2;
        int sum1=0;
        for(int i=0;i<n/2;i++){
            v.push_back(j);
            j+=2;
            sum1=sum1+v[i];
        }
        int k=1;
        int sum2=0;
        for(int i=n/2;i<n-1;i++){
            v.push_back(k);
            k+=2;
            sum2=sum2+v[i];
        }
        int sum3=0;
        while(sum1>=sum2+sum3){
            v[n-1]=k;
            sum3=sum3+v[n-1];
            if(sum1==sum2+sum3){
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++){
                    cout<<v[i]<<" ";
                }
                break;
            }
            else if(sum2+sum3>sum1){
                cout<<"NO"<<endl;
                break;
            }
            else{
                sum3=0;
                k=k+2;
            }
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