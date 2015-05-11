class Solution {
public:
    int reverse(int x) {
        int rnum = 0;
        int num = x;

        while (num != 0)
        {
            if (rnum < INT_MIN/10 || (rnum == INT_MIN/10 && num < INT_MIN%10))
            {
                rnum = 0;
                break;
            }
            if (INT_MAX/10 < rnum || (rnum == INT_MAX/10 && INT_MAX%10 < num))
            {
                rnum = 0;
                break;
            }
            rnum = 10*rnum + num%10;
            num /= 10;
        }
        return rnum;
    }
};