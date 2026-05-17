class Solution {
public:
    bool isPalindrome(string s) {
        //make a lowercase string without white spaces
        //no need for a new string I can just ignore it
        //compare start to end finish in middle (even/odd)

        //edge cases - only spaces

        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            while (l < r and !isalnum(s[l])) {
                l++;
            }

            while (r > l and !isalnum(s[r])) {
                r--;
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;    
            }

            r--;
            l++;
        }

        return true;
    }
};
