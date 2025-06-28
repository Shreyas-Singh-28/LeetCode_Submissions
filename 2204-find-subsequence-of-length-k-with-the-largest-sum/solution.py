class Solution(object):
    def maxSubsequence(self, nums, k):
        result = []
        for i in range(k):
            result.append(nums[i])
        for i in range(k, len(nums)):
            min_value = min(result)
            if nums[i] > min_value:
                result.remove(min_value)
                result.append(nums[i])
        return result
