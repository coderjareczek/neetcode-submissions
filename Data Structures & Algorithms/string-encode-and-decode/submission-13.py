class Solution:
    def encode(self, strs: List[str]) -> str:
        newStr = ""
        for s in strs:
            length = len(s)
            newStr += str(length) + "#" + s
        print(newStr)
        return newStr

    def decode(self, s: str) -> List[str]:
        res = []
        i = 0
        while i < len(s):
            length = ""
            while s[i] != "#":
                length += s[i]
                i += 1
            print(length)
            word = s[i + 1:i + 1 + int(length)]
            res.append(word)
            print(word)
            i = i + 1 + int(length)
        return res



