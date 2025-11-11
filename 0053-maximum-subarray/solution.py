class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr_sum = nums[0]
        max_sum = nums[0]
        n=len(nums)
        for i in range(1, n):
            curr_sum = max(curr_sum+nums[i], nums[i])
            max_sum = max(curr_sum, max_sum)

        return max_sum
