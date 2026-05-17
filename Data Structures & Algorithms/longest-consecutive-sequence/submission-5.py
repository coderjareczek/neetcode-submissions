class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not len(nums):
            return 0
        
        nums.sort() # O(nlogn)
        count = 1
        res = 1
        for i in range(1, len(nums)): # O(n)
            if nums[i - 1] == nums[i]:
                continue
            elif (nums[i - 1] + 1) == nums[i]:
                count += 1
                res = max(res, count) 
            else:
                count = 1
        return res  

        # 2 3 4 4 5 10 20   