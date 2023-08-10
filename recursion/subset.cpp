#include <iostream>
#include <vector>

using namespace std;

// Recursive function to generate the power set
void generatePowerSet(const vector<int>& nums, vector<int>& currentSet, int index)
{
    // Base case: if we have processed all elements
    if (index == nums.size())
    {
        // Print the current set
        cout << "{ ";
        for (int num : currentSet)
        {
            cout << num << " ";
        }
        cout << "}\n";
        return;
    }

    //  include the current element in the set
    currentSet.push_back(nums[index]);
    generatePowerSet(nums, currentSet, index + 1);

    // exclude the current element from the set
    currentSet.pop_back();
    generatePowerSet(nums, currentSet, index + 1);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> currentSet;

    generatePowerSet(nums, currentSet, 0);

    return 0;
}
