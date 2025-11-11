class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ans=1
        n = len(nums)
        if n<=2:
            return 2
        for i in range(2, n):
            if nums[i]!=nums[ans-1]:
                ans+=1
                nums[ans] = nums[i]

        return ans+1
