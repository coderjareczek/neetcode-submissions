class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numsSet = set(nums) # O(n)
        res = 0

        for n in nums:
            cur = 1
            if n - 1 not in numsSet:
                while n + 1 in numsSet:
                    cur += 1
                    n += 1
            res = max(res, cur)

        return res