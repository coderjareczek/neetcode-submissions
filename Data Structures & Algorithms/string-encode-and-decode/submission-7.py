class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            l = len(s)
            res = res + str(l) + '#' + s
        return res


    def decode(self, s: str) -> List[str]:
        res = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != '#':
                j += 1
            l = int(s[i:j])
            word = s[(j + 1):(j + l + 1)]    
            i = j + l + 1
            res.append(word)
        return res



