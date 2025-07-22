class Solution(object):
    def findLucky(self, arr):
        dict = {}
        for i in arr:
            if not i in dict:
                dict[i] = 1
            else:
                dict[i] = dict.get(i) + 1
        lst = []
        for key, value in dict.items():
            if key == value:
                lst.append(key)
        if lst == []:
            return -1
        else:
            return max(lst)
