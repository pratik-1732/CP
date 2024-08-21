//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int output(string S1, string S2, int n, int m, vector<vector<int>> dp){
        if(n<0 || m<0) return 0;
        
        if(dp[n][m]!= -1) return dp[n][m];
        
        int same=INT_MIN, nosame=INT_MIN;
        
        if(S1[n]==S2[m]) same= 1+output(S1, S2, n-1, m-1, dp);
        else nosame= max(output(S1, S2, n-1, m, dp), output(S1, S2, n, m-1, dp));
        
        dp[n][m]= max(same, nosame);
        cout<<"("<<n<<","<< m<<")- "<<dp[n][m]<<endl;
        return dp[n][m];
    }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>> dp(n, vector<int> (m+1, -1));
        
        return output(S1, S2, n-1, m-1, dp);
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends