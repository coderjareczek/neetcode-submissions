class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        countS = {}
        countT = {}
        for sChar, tChar in zip(s, t):
            countS[sChar] = 1 + countS.get(sChar, 0)
            countT[tChar] = 1 + countT.get(tChar, 0)
        
        return countS == countT