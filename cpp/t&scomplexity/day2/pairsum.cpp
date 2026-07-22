// Pair Sum Problem 
#include <iostream>
#include <vector>
using namespace std;

bool hasPairWithSum(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    if (hasPairWithSum(arr, target)) {
        cout << "Pair found with sum " << target << endl;
    } else {
        cout << "No pair found with sum " << target << endl;
    }
    return 0;
}
// Time complexity of this code is O(n^2) and space complexity is O(1).