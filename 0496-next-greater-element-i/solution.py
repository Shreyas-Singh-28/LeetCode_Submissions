class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        dic = {}
        stack = []
        for num in nums2:
            while stack and stack[-1] < num:
                dic[stack[-1]] = num
                stack.pop()
            stack.append(num)
        while stack:
            dic[stack[-1]]=-1
            stack.pop()
        ans = [dic[num] for num in nums1]
        return ans
