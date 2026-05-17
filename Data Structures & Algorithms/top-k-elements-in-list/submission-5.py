class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        freq = [[] for i in range(len(nums) + 1)]

        for n in nums:
            count[n] = 1 + count.get(n, 0)

        for n, c in count.items():
            freq[c].append(n) 

        res = []
        for l in reversed(freq):
            for e in l:
                res.append(e)
                if len(res) == k:
                    return res

