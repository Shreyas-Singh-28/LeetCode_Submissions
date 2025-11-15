class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        dic = {}
        for i in range(len(nums2)):
            for j in range(i+1,len(nums2)):
                if nums2[j]>nums2[i]:
                    dic[nums2[i]]=nums2[j]
                    break
            else:
                dic[nums2[i]]=-1
        ans=[dic[num] for num in nums1]
        return ans
