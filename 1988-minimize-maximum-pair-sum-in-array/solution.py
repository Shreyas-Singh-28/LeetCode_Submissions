class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()
        res=[]
        n=len(nums)
        for i in range(int(n/2)):
            res.append(nums[i]+nums[n-1-i])
        return max(res)
