class Solution:
    def trap(self, height: List[int]) -> int:
        l, r = [0] * len(height), [0] * len(height)
        for i in range(1, len(height)):
            l[i] = max(l[i - 1], height[i - 1])
        for i in range(len(height) - 2, -1, -1):
            r[i] = max(r[i + 1], height[i + 1])
        area = 0
        for i in range(len(height)):
            cur_area = min(l[i], r[i]) - height[i]
            area += max(0, cur_area)
        return area

