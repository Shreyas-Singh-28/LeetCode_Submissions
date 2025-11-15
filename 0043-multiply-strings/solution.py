class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        j=len(num2)-1
        ans=0
        k=1
        while j>=0:
            ans+=int(num1)*int(num2[j])*k
            j-=1
            k*=10
        return str(ans)
