class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans=0
        temp=0
        for num in nums:
            if num==1:
                temp+=1
            else:
                temp=0
            if temp>ans:
                ans=temp
        return ans
