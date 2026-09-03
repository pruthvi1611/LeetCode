#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Outer loop picks the FIRST number of the pair
    for (int i = 0; i < nums.size(); i++) {
        // Inner loop checks every number AFTER i (avoids reusing the same
        // element, and avoids checking the same pair twice in both orders)
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};  // found it -- return their indices
            }
        }
    }
    return {};  // problem guarantees a solution exists, but good practice regardless
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    cout << "Values: " << nums[result[0]] << " + " << nums[result[1]]
         << " = " << target << endl;

    return 0;
}