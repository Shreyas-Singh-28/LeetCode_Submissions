class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        start=prices[0]
        n=len(prices)
        ans=0
        temp=0
        for i in range(1,n):
            if start>prices[i]:
                start=prices[i]
            else:
                temp=prices[i]-start
                if temp>ans:
                    ans=temp
        return ans
