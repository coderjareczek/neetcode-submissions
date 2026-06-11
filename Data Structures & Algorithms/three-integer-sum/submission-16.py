class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = set()
        nums.sort()
        for i in range(len(nums)):
            l = i + 1
            r = len(nums) - 1
            while l < r:
                triplet = (nums[i], nums[l], nums[r])
                if sum(triplet) > 0:
                    r -= 1
                elif sum(triplet) < 0:
                    l += 1
                else:
                    res.add(triplet)
                    l += 1
                    r -= 1
    
        return list(res)

# O(n^2)
# O(1), O(m),