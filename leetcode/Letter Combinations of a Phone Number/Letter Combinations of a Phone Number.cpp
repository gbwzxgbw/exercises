class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string mapping[10] = {" ", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        int n = digits.length();

        if (n == 0)
            return res;

        vector<int> pi;

        for (int i=0; i<n; i++)
        {
            pi.push_back(0);
        }

        string r = "";
        int pos = 0;
        while (true)
        {
            while (pos < n)
            {
                r.push_back(mapping[digits[pos]-'0'][pi[pos]]);
                pos ++;
            }
            res.push_back(r);

            pi[pos] ++;
            while (pos >= 0 && pi[pos] >= mapping[digits[pos]-'0'].length())
            {
                pi[pos] = 0;
                pos --;
                if (pos >=0)
                    pi[pos] ++;
            }

            if (pos < 0)
                break;
        }

        return res;
    }
};

class Solution_backtracing {
public:
    vector<string> letterCombinations(string digits) {
        string mapping[10] = {" ", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        int n = digits.length();

        if (n == 0)
            return res;

        vector<int> pi;

        for (int i=0; i<n; i++)
        {
            pi.push_back(0);
        }

        string r = "";
        int pos = 0;
        while (true)
        {
            while (pos < n)
            {
                r.push_back(mapping[digits[pos]-'0'][pi[pos]]);
                pos ++;
            }
            res.push_back(r);

            pos --;
            r.pop_back();
            pi[pos] ++;

            while (pos >= 0 && pi[pos] >= mapping[digits[pos]-'0'].length())
            {
                pi[pos] = 0;
                pos --;

                if (pos >=0)
                {
                    r.pop_back();
                    pi[pos]++;
                }
            }

            if (pos < 0)
                break;
        }

        return res;
    }
};