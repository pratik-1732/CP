#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

vector<int> searchRange(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        vector<int> ans(2);
        ans[0]=-1; ans[1]=-1;
        int low= INT_MAX, high= INT_MIN;

        while(l<=r){
            int mid= l+(r-l)/2;
            if(nums[mid]==target){
                low= min(low, mid);
                r=mid-1;
            }
            if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        l=0; r=nums.size()-1;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(nums[mid]==target) {
                high= max(high, mid);
                l=mid+1;
                //cout<<high<<endl;
            }
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        //cout<<low<<" "<<high<<endl;
        if(low!=INT_MAX || high!=INT_MIN){
            ans[0]=low;
            ans[1]=high;
            return ans;
        }
        else{
            return ans;
        }
            
    }

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
	int target; cin>>target;
	vector<int> temp;
	temp= searchRange(nums, target);
	for(auto i: temp) cout<<i<<" ";
	}
	return 0;
}