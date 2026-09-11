#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        int fast = 0;
        while(fast<nums.size()){
            if(nums[fast]==val){
                fast++;
            }else{
                nums[slow]=nums[fast];
                slow++;
                fast++;
            }
        }
        return slow;
    }
};

void runTest(vector<int> nums, int val) {
    Solution sol;
    int k = sol.removeElement(nums, val);
    cout << "k = " << k << " | first k elements: ";
    for (int i = 0; i < k; i++) cout << nums[i] << " ";
    cout << endl;
}

int main(){
    runTest({3,2,2,3}, 3);
    runTest({0,1,2,2,3,0,4,2}, 2);
    runTest({1}, 1);
    runTest({2,2,2}, 2);
    runTest({1,2,3}, 5);
    return 0;
}