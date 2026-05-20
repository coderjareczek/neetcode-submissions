class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)

        # Each index represents number of times a number appeared
        freq = [[] for _ in range(len(nums) + 1)]

        for n, c in count.items():
            freq[c].append(n)

        res = []
        for i in range(len(nums), 0, -1):
            if len(res) == k:
                return res
            res.extend(freq[i])
        return res

# Time: O(n), n - length of nums
# Space: O(n)