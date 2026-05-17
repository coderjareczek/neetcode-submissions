class MinStack:

    
    
    def __init__(self):
        self.stack = []
        self.minValues = []    

    def push(self, val: int) -> None:
        self.stack.append(val)
        val = min(val, self.minValues[-1] if self.minValues else val)
        self.minValues.append(val)

    def pop(self) -> None:
        self.stack.pop()
        self.minValues.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minValues[-1]
        
