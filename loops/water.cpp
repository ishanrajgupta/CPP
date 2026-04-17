#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};

    int left = 0, right = h.size() - 1;
    int leftMax = 0, rightMax = 0, water = 0;

    while (left < right) {
        if (h[left] < h[right]) {
            if (h[left] >= leftMax)
                leftMax = h[left];
            else
                water += leftMax - h[left];
            left++;
        } else {
            if (h[right] >= rightMax)
                rightMax = h[right];
            else
                water += rightMax - h[right];
            right--;
        }
    }

    cout << water;
    return 0;
}