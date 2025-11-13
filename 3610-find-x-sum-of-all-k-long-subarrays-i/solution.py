class Solution:
    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        answer = []
        n=len(nums)
        left=0
        for i in range(n-k+1):
            dic = {}
            for num in nums[left:left+k]:
                if num not in dic:
                    dic[num]=1
                else:
                    dic[num]+=1
            top_two = sorted(dic, key=lambda k: (dic[k],k), reverse=True)[:x]
            summ=0
            for num in nums[left:left+k]:
                if num in top_two:
                    summ+=num
            answer.append(summ)
            left+=1
        return answer
