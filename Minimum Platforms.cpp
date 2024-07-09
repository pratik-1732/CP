//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int, int>> vp(n);
    	for(int i=0; i<n; i++){
    	    vp[i]= make_pair(arr[i], dep[i]);
    	}

        int cnt=0;
        vector<pair<int, char>> time;
        for(int i=0; i<n; i++){
            time.push_back(make_pair(arr[i],'a'));
        }
        for(int i=0; i<n; i++){
            time.push_back(make_pair(dep[i],'d'));
        }
        sort(time.begin(), time.end());
        int ans=INT_MIN;
        for(int i=0; i<time.size(); i++){
            if(time[i].second=='a'){
                cnt++;
                ans= max(ans, cnt);
            }
            else if(time[i].second=='d'){
                cnt--;
                ans= max(ans, cnt);
            }
        }
        return ans;

    	// sort(vp.begin(), vp.end());
    	
        // for(auto i: vp) cout<<i.first<<" "<<i.second<<endl;
        
    	// set<int> trains;
    	// trains.insert(vp[0].second);
    	// int ans=1;
    	// for(int i=1; i<n; i++){
    	//     int arrival= vp[i].first, departure= vp[i].second;
    	//     auto it=trains.begin();
    	//     int lastDep= *it;
    	    
     //        //cout<<arrival<<" "<<departure<<" "<<lastDep;
    	//     if(arrival<=lastDep){
    	//         trains.insert(departure);
    	//         int len= trains.size();
    	//         ans= max(ans, len);
     //           // cout<<" "<<ans<<endl;
    	//     }
    	//     else{
     //            set<int>::iterator itr;
    	//         itr= trains.begin();
    	//         trains.erase(itr);
    	//         trains.insert(departure);
    	//         int len= trains.size();
    	//         ans= max(ans, len);
     //            // for(auto itr=trains.begin(); itr!=trains.end(); itr++){
     //            //     cout<<*itr<<" ";
     //            // }
     //            // cout<<endl;
     //            // cout<<" "<<len<<endl;
                
    	//     }
    	// }
    	// return ans;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t=1;
    // cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends