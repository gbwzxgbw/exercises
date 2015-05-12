class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (int i = 0; i < s.length(); i ++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                p.push(s[i]);
            else
            {
                if (p.empty())
                    return false;

                char cp = p.top();
                p.pop();
                if (s[i] == ')' && cp != '(')
                    return false;
                if (s[i] == ']' && cp != '[')
                    return false;
                if (s[i] == '}' && cp != '{')
                    return false;
            }
        }
        return p.empty();
    }
};