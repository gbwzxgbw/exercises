class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char smap[128] = {0}, tmap[128] = {0};
        int len = s.length();

        for (int i=0; i<len; i++)
        {
            int si = s[i];
            int ti = t[i];

            if (smap[si] == 0 && tmap[ti] == 0)
            {
                smap[si] = t[i];
                tmap[ti] = s[i];
            }
            else if (smap[si] == t[i] && tmap[ti] == s[i])
            {
                continue;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};