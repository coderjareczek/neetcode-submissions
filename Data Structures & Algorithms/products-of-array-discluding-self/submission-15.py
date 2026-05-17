class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = [1 for _ in range(len(nums))]
        fromLeft = 1
        for i in range(len(nums)):
            res[i] *= fromLeft
            fromLeft *= nums[i]
        fromRight = 1
        for i in range(len(nums) - 1, -1, -1):
            res[i] *= fromRight
            fromRight *= nums[i]
        return res     
