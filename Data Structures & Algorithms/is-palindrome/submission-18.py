class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1 
        while l < r:
            while l < len(s) and not self.is_alphanumerical(s[l]):
                l += 1
            while r >= 0 and not self.is_alphanumerical(s[r]):
                r -= 1
            if l < r and s[l].lower() != s[r].lower():
                return False
            l += 1
            r -= 1

        return True

    def is_alphanumerical(self, c):
        if (ord("a") <= ord(c) <= ord("z") or
            ord("A") <= ord(c) <= ord("Z") or
            ord("0") <= ord(c) <= ord("9")):
            return True
        return False