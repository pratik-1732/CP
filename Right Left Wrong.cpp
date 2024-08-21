// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n;i++){
//             cin >> arr[i];
//         }
//         string s;
//         cin >> s;
//         // int sum = 0;
//         for (int i = 1; i < n;i++){
//             arr[i] = arr[i] + arr[i - 1];
//         }
//         int firstL=-1, lastR=n;
//         int i = 0;
//         while(i++<n){
//             if(s[i]=='L'){
//                 firstL = i;
//                 break;
//             }
//         }
//         i = n - 1;
//         while(i-->=0){
//             if(s[i]=='R'){
//                 lastR = i;
//                 break;
//             }
//         }
//         int sum = 0;
//         int l = firstL, r = lastR;
//         while(l<r){
//             sum += arr[r] - l <= 0 ? 0 : arr[l - 1];
//             l++, r--;
//             while(s[l]!='L')
//                 l++;
//             while(s[r]!='R')
//                 r--;
//         }
//         cout <<sum << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string s;
        cin >> s;

        // Compute prefix sums
        for (int i = 1; i < n; i++){
            arr[i] = arr[i] + arr[i - 1];
        }

        int firstL = -1, lastR = -1;

        // Find the first 'L' and last 'R'
        for (int i = 0; i < n; i++){
            if(s[i] == 'L'){
                firstL = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--){
            if(s[i] == 'R'){
                lastR = i;
                break;
            }
        }

        if(firstL == -1 || lastR == -1 || firstL >= lastR){
            // If there is no valid 'L' or 'R', or the 'L' appears after 'R'
            cout << 0 << endl;
            continue;
        }

        int sum = 0;
        int l = firstL, r = lastR;

        // Iterate to calculate the sum
        while(l < r){
            int current_sum = arr[r] - (l > 0 ? arr[l - 1] : 0);
            sum += current_sum > 0 ? current_sum : 0;
            l++, r--;

            // Move l to the next 'L'
            while(l < r && s[l] != 'L')
                l++;
            // Move r to the previous 'R'
            while(r > l && s[r] != 'R')
                r--;
        }

        cout << sum << endl;
    }
    return 0;
}