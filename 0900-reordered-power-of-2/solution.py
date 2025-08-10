class Solution(object):
    def reorderedPowerOf2(self, n):
        # Sort digits of n as a string to compare permutations
        target = sorted(str(n))
        
        # Check all powers of 2 up to 10^9
        for i in range(31):  # 2^0 to 2^30
            if sorted(str(1 << i)) == target:
                return True
        return False
