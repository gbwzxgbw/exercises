class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;
        vector<int> res;

        int n = nums.size();

        int l = 0;
        int r = n - 1;
        int m;

        while (l <= r)
        {
            m = l + (r-l)/2;
            if (nums[m] == target)
            {
                start = m;
                while (start > 0 && nums[start-1] == target)
                    start --;
                end = m;
                while (end < n-1 && nums[end+1] == target)
                    end ++;
                break;
            }
            else if (nums[m] > target)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        res.push_back(start);
        res.push_back(end);
        return res;
    }
};