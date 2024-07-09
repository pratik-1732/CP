//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> sne(n);
        for(int i=0; i<n; i++){
            sne[i]=make_pair(start[i], end[i]);
        }
        sort(sne.begin(), sne.end());
        int cnt=1;
        int temp=sne[n-1].first;
        for(int i=n-2; i>=0; i--){
            if(sne[i].second<temp){
                cnt++;
                temp=sne[i].first;
            }
        }
        return cnt;

        // Your code here
        // int sMax=INT_MIN, sMini= INT_MAX, eMax=INT_MIN, eMini= INT_MAX;
        // for(int i=0; i<n; i++){
        //     sMax= max(start[i], sMax);
        //     sMini= min(start[i], sMini);
        //     eMax= max(end[i], eMax);
        //     eMini= min(end[i], eMini);
        // }
        // int len;
        // bool check=false;
        // if(sMax>=eMax) {
        //     if(sMini==0 || eMini==0){
        //         len= sMax+1;
        //         check=true;
        //     }
        //     else{
        //         len= sMax;
        //     }
        // }
        // else{
        //     if(sMini==0 || eMini==0){
        //         len= eMax+1;
        //         check=true;
        //     }
        //     else{
        //         len= eMax;
        //     }
        // }

        // if(check){
        //     vector<int> temp(len, 0);
        //     for(int i=0; i<n; i++){
        //         temp[start[i]]=1;
        //     }
        //     vector<int> preSum(len);
        //     int sum=0;
        //     for(int i=0; i<len; i++){
        //         sum+=temp[i];
        //         preSum[i]=sum;
        //     }
        //     // for(auto i: preSum) cout<<i<<" ";
        //     // cout<<endl;
        //     int cnt=0;
        //     for(int i=0; i<n; i++){
        //         int x=preSum[start[i]], y=preSum[end[i]];
        //         if(x==y) cnt++;
        //         // cout<<x<<" "<<y<<" "<<cnt<<endl;
        //     }
            
        //     return cnt;   
        // }
        // else{
        //     vector<int> temp(len+1, 0);
        //     for(int i=0; i<n; i++){
        //         temp[start[i]]=1;
        //     }
        //     vector<int> preSum(len+1);
        //     int sum=0;
        //     for(int i=0; i<len+1; i++){
        //         sum+=temp[i];
        //         preSum[i]=sum;
        //     }
        //     for(int i=0; i<len+1; i++) cout<<i<<"-"<<preSum[i]<<", ";
        //     cout<<endl;
        //     int cnt=0;
        //     for(int i=0; i<n; i++){
        //         int x=preSum[start[i]], y=preSum[end[i]];
        //         if(x==y) cnt++;
        //         // cout<<x<<" "<<y<<" "<<cnt<<endl;
        //     }
        //     return cnt;   

        // }
    }
};

//{ Driver Code Starts.
int main() {
    int t=1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends