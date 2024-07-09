#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

vector<int> diversifyCourses(vector<int>& difficulty, int n) {
    unordered_map<int, int> count;
    set<int> duplicates;
    set<int> missing;

    // Count occurrences and find duplicates
    for (int i = 1; i <= n; ++i) {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; ++i) {
        count[difficulty[i]]++;
    }

    for (int i = 1; i <= n; ++i) {
        if (count[i] == 0) {
            missing.insert(i);
        }
        if (count[i] > 1) {
            duplicates.insert(i);
        }
    }

    vector<int> result = difficulty;
    
    // Replace duplicates with missing numbers
    for (int i = 0; i < n && !duplicates.empty(); ++i) {
        if (count[result[i]] > 1) {
            int dup = *duplicates.rbegin(); // Get the largest duplicate
            auto it = missing.begin(); // Get the smallest missing number
            if (*it < result[i] || result[i] == dup) {
                count[result[i]]--;
                count[*it]++;
                result[i] = *it;
                missing.erase(it);
                if (count[dup] == 1) {
                    duplicates.erase(dup);
                }
            }
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> difficulty(n);
    for (int i = 0; i < n; ++i) {
        cin >> difficulty[i];
    }

    vector<int> result = diversifyCourses(difficulty, n);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
