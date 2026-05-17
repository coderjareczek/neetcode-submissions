class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        triplets = set()
        nums.sort()
        for i in range(len(nums) - 2):
            l = i + 1
            r = len(nums) - 1
            while l < r:
                if nums[i] + nums[l] + nums[r] == 0:
                    triplets.add((nums[i], nums[l], nums[r]))
                    l += 1
                    r -= 1
                elif nums[i] + nums[l] + nums[r] > 0:
                    r -= 1     
                elif nums[i] + nums[l] + nums[r] < 0:
                    l += 1
        return list(triplets)
    