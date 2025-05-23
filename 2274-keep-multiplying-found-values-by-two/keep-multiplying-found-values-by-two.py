class Solution(object):
    def findFinalValue(self, nums, original):
        nums.sort()

        for i in nums:
            if(original==i):
                original=original*2
        return original    
       
      
        