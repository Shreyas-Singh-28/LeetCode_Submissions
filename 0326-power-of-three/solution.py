class Solution(object):
    def isPowerOfThree(self, n):
        if n <= 0:
            return False
        result = True
        while n != 1:
            if n % 3 != 0:
                result = False
                break
            else:
                n /= 3
        return result
