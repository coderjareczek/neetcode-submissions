class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = 0
        r = len(s) - 1

        while l < r:
            while l < r and not self.isAlphanumeric(s[l]):
                l += 1
            while l < r and not self.isAlphanumeric(s[r]):
                r -= 1
            if s[l].lower() != s[r].lower():
                return False
            l += 1
            r -= 1

        return True
    
    def isAlphanumeric(self, c):
        if (ord('A') <= ord(c) and ord(c) <= ord('Z')
        or ord('a') <= ord(c) and ord(c) <= ord('z')
        or ord('0') <= ord(c) and ord(c) <= ord('9')):
            return True
        return False