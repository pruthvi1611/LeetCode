#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // A map from symbol -> value. This is Phase 0 Topic 10 territory
        // (unordered_map wasn't covered directly, but it works exactly like
        // 'map' -- key lookup with []). Using this avoids a long if/else
        // chain for every character.
        unordered_map<char, int> values = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = values[s[i]];
            
            // Look ahead to the NEXT character, if one exists.
            // If current symbol's value is SMALLER than the next one,
            // this is a subtractive pair (like IV, IX, XC) -- subtract it.
            if (i + 1 < s.length() && current < values[s[i + 1]]) {
                total -= current;
            } else {
                total += current;
            }
        }

        return total;
    }
};

// --- local test harness, not part of the LeetCode submission ---
int main() {
    Solution sol;

    cout << "III = " << sol.romanToInt("III") << endl;         // 3
    cout << "IV = " << sol.romanToInt("IV") << endl;            // 4
    cout << "IX = " << sol.romanToInt("IX") << endl;            // 9
    cout << "LVIII = " << sol.romanToInt("LVIII") << endl;      // 58
    cout << "MCMXCIV = " << sol.romanToInt("MCMXCIV") << endl;  // 1994

    return 0;
}