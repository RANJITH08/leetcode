class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> answer;
      int n = nums.size();
      for(int i=0; i<n ; i++)
      { 
        int x = abs(nums[i]);
        if(nums[x-1]<0)
        {
            answer.push_back(x);
        }
         nums[x-1]*=-1;
      }  
    return answer;
    }
};