class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> > res;
        vector<int> *rp;
        int n = nums.size();

        if (n < 3)
            return res;

        sort(nums.begin(), nums.end());

        vector<int>::iterator l=nums.begin();
        while (l < nums.end()-2)
        {
            vector<int>::iterator m = l + 1;
            vector<int>::iterator r = nums.end() - 1;

            while (m < r)
            {
                int target = 0 - *l;
                if (*m + *r == target)
                {
                    rp = new vector<int>;
                    rp->push_back(*l);
                    rp->push_back(*m);
                    rp->push_back(*r);
                    res.push_back(*rp);
                    while (m < r && *(m+1) == *m)
                        m ++;
                    m ++;
                    while (m < r && *(r-1) == *r)
                        r --;
                    r --;
                }
                else if (*m + *r < target)
                {
                    m ++;
                }
                else
                {
                    r --;
                }
            }

            while (l < nums.end()-2 && *(l+1) == *l)
                l ++;
            l ++;
        }

        return res;
    }
};