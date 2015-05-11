class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();

        if (n == 0)
            return "";

        int maxBeg = 0;
        int maxLen = 1;
        int m = 0;

        while (m < n)
        {
            int l = m-1;
            int r = m+1;

            while (r <= n-1 && s[m] == s[r])
            {
                r ++;
            }
            m = r;

            while (0 <= l && r <= n-1 && s[l] == s[r])
            {
                l --;
                r ++;
            }

            int currLen = r-l-1;
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxBeg = l+1;
            }
        }

        return s.substr(maxBeg, maxLen);
    }
};