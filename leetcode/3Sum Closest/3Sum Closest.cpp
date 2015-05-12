class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int dmin = INT_MAX;
        int sum = target;

        if (n < 3)
            return sum;

        sort(nums.begin(), nums.end());

        vector<int>::iterator l=nums.begin();
        while (l < nums.end()-2)
        {
            vector<int>::iterator m = l + 1;
            vector<int>::iterator r = nums.end() - 1;

            while (m < r)
            {
                int d = *l + *m + *r - target;

                if (d < 0)
                {
                    m ++;
                }
                else if (d > 0)
                {
                    r --;
                }
                else
                {
                    return target;
                }

                if (abs(d) < dmin)
                {
                    dmin = abs(d);
                    sum = target + d;
                }
            }

            l ++;
        }

        return sum;
    }
};