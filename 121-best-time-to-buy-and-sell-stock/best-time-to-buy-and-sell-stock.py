class Solution(object):
    def maxProfit(self, prices):
        min_p=prices[0]
        max_p=0
        n=len(prices)

        for i in range (1,n):
            if(min_p > prices[i]):
                min_p=prices[i]
            elif(prices[i] - min_p > max_p):
                max_p=prices[i] - min_p
        return max_p             
                    
        