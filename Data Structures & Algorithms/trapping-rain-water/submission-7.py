class Solution:
    def trap(self, height: List[int]) -> int:
        stack = []
        area = 0
        for i in range(len(height)):
            while stack and height[i] > height[stack[-1]]:
                mid_height = height[stack.pop()]
                if stack:
                    left_height = height[stack[-1]]
                    right_height = height[i]
                    width = i - stack[-1] - 1
                    area += (min(left_height, right_height) - mid_height) * width
            stack.append(i)
        return area
        