class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        countS, countT = {}, {}

        for elemS, elemT in zip(s, t):
            countS[elemS] = 1 + countS.get(elemS, 0)
            countT[elemT] = 1 + countT.get(elemT, 0)        
        return countS == countT