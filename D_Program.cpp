#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}


int LCM(int a, int b){  // complexty is log(min(a,b))
    return a/ GCD(a,b)*b;
}

void solve(){
    string s,t; cin>>s>>t;
      int l=LCM(s.size(),t.size());
      string a="",b="";
        while (a.size()<l){
            a+=s;
        } while (b.size()<l){
            b+=t;
        }
        if(a==b){
            cout<<a<<endl;
        }
        else{
            cout<<-1<<endl;
        }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t; cin>>t;
    while (t--){
       solve();
    }
    return 0;
}













 			   									  	 	 		 		   	