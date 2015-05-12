class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int l = 0;
        int r = n - 1;
        int m = 0;

        if (nums[r] < target)
            return n;

        if (nums[l] > target)
            return 0;

        while (l <= r)
        {
            m = l + (r-l)/2;
            if (nums[m] == target)
                return m;
            else if (nums[m] > target)
                r = m - 1;
            else
                l = m + 1;
        }

        return l;
    }
};