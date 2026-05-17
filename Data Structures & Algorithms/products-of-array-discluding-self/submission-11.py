class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res = [0] * n
        prod = 1
        no_zeros = 0
        for i in range(n):
            if nums[i] == 0:
                no_zeros += 1
            else:
                prod *= nums[i]
        
        if no_zeros == 0:
            for i in range(n):
                res[i] = prod // nums[i]

        if no_zeros > 1:
            return res
        
        for i in range(n):
            if nums[i] == 0:
                res[i] = prod
        return res
