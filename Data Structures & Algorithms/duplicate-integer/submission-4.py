class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        return not len(set(nums)) == len(nums)

# time: 
# - time complexity of creating a set O(n)
# - of adding an element to a set O(1)
# space: O(n)
        