class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        if (n == 0)
            return res;

        string mapping = "()";
        vector<int> pi;
        for (int i=0; i<2*n; i++)
        {
            pi.push_back(0);
        }

        int pos = 0;
        string r = "";
        int lp = 0;
        int rp = 0;
        while (pos >= 0)
        {
            while (pos < 2*n)
            {
                if (pi[pos] == 0 && lp < n)
                    lp ++;
                else if (pi[pos] == 1 && rp < lp && rp < n)
                    rp ++;
                else
                    break;

                r.push_back(mapping[pi[pos]]);
                pos ++;
            }

            if (pos >= 2*n)
            {
                res.push_back(r);
            }
            else
            {
                pi[pos] ++;
            }

            while (pos >= 2*n || (0 <= pos && pos < 2*n && pi[pos] >= mapping.length()))
            {
                if (pos < 2*n)
                {
                    pi[pos] = 0;
                }
                pos --;
                if (pos >= 0)
                {
                    char c = r[r.length()-1];
                    (c == '(' ? lp -- : rp --);
                    r.pop_back();
                    pi[pos] ++;
                }
            }
        }

        return res;
    }
};