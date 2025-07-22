class Solution(object):
    def possibleStringCount(self, word):
        total = 1
        for i in range(len(word) - 1):
            if word[i] == word[i + 1]:
                total += 1
        return total
