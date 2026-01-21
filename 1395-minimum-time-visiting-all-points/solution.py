class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        c=0
        for i in range(len(points)-1):
            x=points[i]
            y=points[i+1]
            c+=max(abs(x[0]-y[0]),abs(x[1]-y[1]))

        return c
