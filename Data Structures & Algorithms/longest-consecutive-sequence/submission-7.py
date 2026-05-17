class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = set(nums)
        res = 0
        for n in nums:
            if (n - 1) not in nums:
                streak = 1
                curr = n
                while (curr + 1) in nums:
                    streak += 1
                    curr += 1
                res = max(res, streak) 
        return res
         