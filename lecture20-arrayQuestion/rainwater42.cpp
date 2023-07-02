#include <iostream>
#include <vector>

using namespace std;

int trapWater(vector<int>& height) {
    int n = height.size();
    if (n <= 2) {
        return 0; // Cannot trap water with less than 3 bars
    }

    vector<int> leftMax(n), rightMax(n);

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int water = 0;
    for (int i = 0; i < n; i++) {
        int minHeight = min(leftMax[i], rightMax[i]);
        if (minHeight > height[i]) {
            water += minHeight - height[i];
        }
    }

    return water;
}

int main() {
    int n;
    cout << "Enter the number of bars: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights of the bars: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int trappedWater = trapWater(height);
    cout << "The amount of water that can be trapped is: " << trappedWater << " units." << endl;

    return 0;
}
