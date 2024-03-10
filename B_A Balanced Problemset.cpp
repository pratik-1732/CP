#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
      int x,n;
        cin>>x>>n;
        int temp = 1;
        for(int i=1;i*i<=x;i++){
            if(x%i==0){
                if(n<=x/i)
                    temp=max(temp,i);
                if(n<=i)
                    temp=max(temp,x/i);
            }
        }
        cout <<temp<<endl;
}

int32_t main()
{	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	solve();
	}

	return 0;
}