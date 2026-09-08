#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i]++;
            if (digits[i] < 10) {
                return digits;
            } else {
                digits[i] = 0;   
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
void printResult(vector<int> digits, string label) {
    Solution sol;
    vector<int> result = sol.plusOne(digits);
    cout << label << " -> ";
    for (int x : result) cout << x << " ";
    cout << endl;
}
int main() {
    printResult({1, 2, 3}, "{1,2,3}");
    printResult({9, 9, 9}, "{9,9,9}");
    printResult({1, 2, 9}, "{1,2,9}");
    printResult({9}, "{9}");
    printResult({0}, "{0}");
    return 0;
}