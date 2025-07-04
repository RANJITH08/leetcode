class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int count = 0;

        for(int num : nums) {
            if(count == 0) {
                majority = num;
                count = 1;
            } else {
                if(num == majority) {
                    count += 1;
                } else {
                    count -= 1;
                }
            }
        }
        return majority;
    }
};