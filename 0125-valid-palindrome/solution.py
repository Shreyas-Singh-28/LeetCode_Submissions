class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        ans=""
        for ch in s:
            if 65<=ord(ch)<=90 or 97<=ord(ch)<=122 or 48<=ord(ch)<=57:
                ans+=ch

        return ans==ans[::-1]
