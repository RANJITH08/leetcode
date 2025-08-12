class Solution(object):
    def majorityElement(self, nums):
        new_d={}
        for i in nums:
            if i in new_d:
                new_d[i] += 1
            else:
                new_d[i] =1
        # a=new_d.values()
        a=max(new_d ,key=new_d.get)
        return a
