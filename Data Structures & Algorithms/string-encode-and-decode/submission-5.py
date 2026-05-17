class Solution:
    def encode(self, strs: List[str]) -> str:
        self.sizes = []  # Store sizes of strings
        self.res = ""    # Store the concatenated result
        for s in strs:
            self.res += s
            self.sizes.append(len(s))
        return self.res

    def decode(self, s: str) -> List[str]:
        res2 = []
        index = 0
        for size in self.sizes:
            res2.append(s[index:index+size])
            index += size
        return res2