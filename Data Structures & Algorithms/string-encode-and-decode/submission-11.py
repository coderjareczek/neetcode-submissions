class Solution:

    def encode(self, strs: List[str]) -> str:
        newStr = ''
        for s in strs:
            length = len(s)
            newStr += str(length) + '#' + s
        print(newStr)
        return newStr
        
    def decode(self, s: str) -> List[str]:
        res = []
        i = 0

        while i < len(s):
            length = ''
            while s[i] != '#':
               length += s[i]
               i += 1
            start = i + 1
            end = start + int(length)
            word = s[start : end]
            print(word, end)
            res.append(word)
            i = end

        return res

