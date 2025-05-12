class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        // Step 1: Clean the string
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (isalnum(c)) {
                a += tolower(c); // simpler and faster than a = a + ...
            }
        }

        // Step 2: Use two pointers to check palindrome
        int l = 0;
        int r = a.length() - 1;
        while (l < r) {
            if (a[l] != a[r]) {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};