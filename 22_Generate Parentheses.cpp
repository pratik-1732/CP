#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void output(vector<string> &ans, string s, int o, int c, int total){
    if(o==c && c==total){
        ans.push_back(s);
        return;
    }
    if(o<total){
        s+="(";
        output(ans, s, o+1, c, total);
        s.pop_back();
    }
    if(c<o){
        s+=")";
        output(ans, s, o, c+1, total);
        s.pop_back();
    }
}
vector<string> generateParenthesis(int n) {  
    vector<string> ans;
    string s="";
        
    output(ans, s, 0, 0, n);
    return ans;
}

int32_t main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    while(t--){
        int n; cin>>n;
        vector<string> ans = generateParenthesis(n);
        for(auto i: ans) cout<<i<<endl;
    }
    return 0;
}


    
    
