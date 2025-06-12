class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0, negative = 0;

        for(int x : nums )
        {
            positive += x>0;
            negative += x<0;
        }
        
        return positive > negative ? positive : negative ;
    }
};