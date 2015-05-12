class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0) return -1;

        int l=0, r=n-1, m;
        while (true)
        {
            m = l + (r-l)/2;
            if (nums[m]==target)
                return m;
            else if (l>=r)
                return -1;
            else if (nums[m]<=nums[l] && nums[m]<=nums[r])
            {
                if (nums[m]<target && target<=nums[r])
                    l = m+1;
                else
                    r = m-1;
            }
            else if (nums[l]<=nums[m] && nums[r]<=nums[m])
            {
                if (nums[l]<=target && target<nums[m])
                    r = m-1;
                else
                    l = m+1;
            }
            else if (nums[l]<=nums[m] && nums[m]<=nums[r])
            {
                if (nums[l]<=target && target<nums[m])
                    r = m-1;
                else
                    l = m+1;
            }
        }
    }
};