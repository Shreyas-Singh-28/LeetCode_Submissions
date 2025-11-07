class Solution(object):
    def countDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        ans = 0
        for char in str(num):
            if num%int(char)==0:
                ans+=1

        return ans
