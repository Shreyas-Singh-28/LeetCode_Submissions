class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        words = text.split()
        result = 0
        for word in words:
            for letter in brokenLetters:
                if letter in word:
                    break
            else:
                result += 1
        return result
