class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // write index

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // overwrite at position k
                k++;
            }
        }

        return k;
    }
};
