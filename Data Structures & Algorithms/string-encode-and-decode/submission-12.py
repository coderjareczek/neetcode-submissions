class Solution:

    def encode(self, strs: List[str]) -> str:
        newStr = ''
        for s in strs:
            length = len(s)
            newStr += str(length) + '#' + s
        return newStr
        
    def decode(self, s: str) -> List[str]:
        res = []
        i = 0

        while i < len(s):
            length = ''
            while s[i] != '#':
               length += s[i]
               i += 1
            i += 1
            res.append(s[i : i + int(length)])
            i += int(length)

        return res

