class Solution {
public:
    bool isPalindrome(int x) {
        int left = 1;
        int right = 10;

        if (x < 0)
            return false;

        while (x / left >= 10)
        {
            left *= 10;
        }

        while (x > 0)
        {
            int high = x / left;
            int low = x % right;

            if (high != low)
                return false;

            x = (x % left) / right;
            left /= 100;
        }

        return true;
    }
};