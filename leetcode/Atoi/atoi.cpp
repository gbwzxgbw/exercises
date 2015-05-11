class Solution {
public:
    int myAtoi(string str) {
        if (str.length() == 0)
            return 0;

        int ret = 0;
        int index = 0;
        bool isNeg = false;


        while (str[index] == ' ' || str[index] == '\t')
        {
            index ++;
        }

        if (str[index] == '-')
        {
            isNeg = true;
        }

        if (str[index] == '+' || str[index] == '-')
        {
            index ++;
        }

        while (true)
        {
            if (str[index] == '\0')
                break;

            if (str[index] < '0' || '9' < str[index])
                break;

            int digit = str[index] - '0';
            if (isNeg)
            {
                if (-ret < INT_MIN/10 || (-ret == INT_MIN/10 && -digit < INT_MIN%10))
                    return INT_MIN;
            }
            else
            {
                if (ret > INT_MAX/10 || (ret == INT_MAX/10 && digit > INT_MAX%10))
                    return INT_MAX;
            }

            ret = ret*10 + digit;
            index ++;
        }

        if (isNeg)
        {
            ret = -ret;
        }

        return ret;
    }
};