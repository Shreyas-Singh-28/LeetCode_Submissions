class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        merged = ""
        len1 = len(word1)
        len2 = len(word2)
        min_len = min(len1, len2)
        for i in range(min_len):
            merged += word1[i]
            merged += word2[i]
        return merged + word1[min_len:] + word2[min_len:]
