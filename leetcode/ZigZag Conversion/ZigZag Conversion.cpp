class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        int n = s.length();
        string res;
        int c = 0;

        for (int r=0; r<numRows; r++)
        {
            int ti = r;
            while (ti < n)
            {
                res.push_back(s[ti]);

                if (r!=0 && r!=numRows-1)
                {
                    int tj = ti + 2*(numRows-1-r);
                    if (tj >= n)
                        break;
                    res.push_back(s[tj]);
                }

                ti += 2*(numRows-1);
            }
        }

        return res;
    }
};