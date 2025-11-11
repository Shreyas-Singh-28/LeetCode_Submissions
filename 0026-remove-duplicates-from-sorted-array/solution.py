class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ans=0
        length = len(nums)
        for i in range(1, length):
            if nums[i]!=nums[ans]:
                ans+=1
                nums[ans] = nums[i]

        return ans+1
