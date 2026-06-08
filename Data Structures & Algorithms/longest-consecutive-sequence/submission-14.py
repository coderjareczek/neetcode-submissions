class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        
        max_len = 0
        for num in nums:
            cur_len = 1
            cur_num = num + 1
            max_len = max(max_len, 1)
            while cur_num in nums_set:
                cur_len += 1
                max_len = max(max_len, cur_len)
                cur_num += 1

        return max_len

# Standard brute force O(n^3) improved to O(n^2) by using hash map
# Space O(n)
