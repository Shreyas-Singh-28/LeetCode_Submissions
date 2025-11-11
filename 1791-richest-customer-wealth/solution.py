class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        ans = 0
        for lst in accounts:
            ans=max(sum(lst),ans)

        return ans
