class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        nums.sort()
        cur_len = 1
        max_len = 1
        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                continue
            if nums[i] + 1 == nums[i + 1]:
                cur_len += 1
            else:
                max_len = max(max_len, cur_len)
                cur_len = 1
                
        return max(max_len, cur_len)
        



# Sort and check
# Time: O(n logn)
# Additional Space: O(1)  