class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num_str="".join([str(n) for n in digits])
        num=int(num_str)+1
        return [int(char) for char in str(num)]
