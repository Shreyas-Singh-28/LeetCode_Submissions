class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        lastone=-1
        for i,num in enumerate(nums):
            if num==1:
                if i-lastone-1<k and lastone!=-1:
                    return False
                lastone=i
        return True
