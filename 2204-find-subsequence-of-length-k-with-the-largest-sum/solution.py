class Solution(object):
    def maxSubsequence(self, nums, k):
        x = [(num, i) for i, num in enumerate(nums)]
        x.sort(reverse=True)
        temp = [(i, num) for num, i in x[:k]]
        temp.sort()
        result = [num for (i, num) in temp]
        return result
