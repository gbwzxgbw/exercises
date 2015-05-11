class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastPos[128];
        memset(lastPos, -1, sizeof(lastPos));
        int maxLen = 0, maxBeg = 0;
        int beg = 0;
        int len = s.length();

        for (int end = 0; end < len; end ++)
        {
            if (lastPos[s[end]] >= beg)
            {
                beg = lastPos[s[end]] + 1;
            }
            else
            {
                maxLen = max(maxLen, end-beg+1);
            }
            lastPos[s[end]] = end;
        }

        return maxLen;
    }
};