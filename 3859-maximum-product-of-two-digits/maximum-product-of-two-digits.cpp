#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while (n) {
            digits.push_back(n % 10); // removing last val and pusing into the vector digits
            n /= 10;
        }
        sort(digits.rbegin(), digits.rend()); // descending ordeeerr
        return digits[0] * digits[1]; // product of 1st two digts 
    }
};
