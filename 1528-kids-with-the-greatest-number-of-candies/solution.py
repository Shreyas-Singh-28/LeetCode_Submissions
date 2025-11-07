class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_candies = max(candies)
        result = [True if num+extraCandies >= max_candies else False for num in candies]
        return result
