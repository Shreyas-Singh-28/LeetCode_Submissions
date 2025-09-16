class Solution(object):
    def maxFreqSum(self, s):
        vowel_dict = {}
        cons_dict = {}
        for char in s:
            if char in "aeiou":
                if char not in vowel_dict:
                    vowel_dict[char] = 1
                else:
                    vowel_dict[char] += 1
            else:
                if char not in cons_dict:
                    cons_dict[char] = 1
                else:
                    cons_dict[char] += 1
        max_vowel = max(vowel_dict.values()) if vowel_dict else 0
        max_cons  = max(cons_dict.values()) if cons_dict else 0

        return max_vowel + max_cons
