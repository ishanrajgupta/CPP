//longest subarray with sum k
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;                    
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_map<int, int> prefixSumIndex;
    int prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        if (prefixSum == k) {
            maxLength = i + 1;
        }

        if (prefixSumIndex.find(prefixSum) == prefixSumIndex.end()) {
            prefixSumIndex[prefixSum] = i;
        }

        if (prefixSumIndex.find(prefixSum - k) != prefixSumIndex.end()) {
            maxLength = max(maxLength, i - prefixSumIndex[prefixSum - k]);
        }
    }

    cout << "Length of the longest subarray with sum " << k << " is: " << maxLength << endl;

    return 0;
}