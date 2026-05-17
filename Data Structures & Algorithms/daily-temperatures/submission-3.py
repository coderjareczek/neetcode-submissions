class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result = [0] * len(temperatures)
        
        for i in range(len(temperatures)):
            temp = 0
            for j in range(i + 1, len(temperatures)):
                temp += 1
                if (temperatures[i] < temperatures[j]):
                    result[i] = temp
                    break
        return result
        