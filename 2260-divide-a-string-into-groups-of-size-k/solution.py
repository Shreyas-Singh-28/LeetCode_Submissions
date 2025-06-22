class Solution(object):
    def divideString(self, s, k, fill):
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """
        result = []
        index = 0
        while index + k <= len(s):
            result.append(s[index : index + k])
            index = index + k
        if index < len(s):
            result.append(s[index : len(s)] + (fill * (k - (len(s) - index))))
        return result


