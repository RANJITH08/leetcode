class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0, count = 0;
        for (int num : nums) {
            if (num % 6 == 0) {  // divisible by both 2 and 3
                sum += num;
                count++;
            }
        }
        return count == 0 ? 0 : sum / count;
    }
};
