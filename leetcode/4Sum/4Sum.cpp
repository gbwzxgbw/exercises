class Solution {
public:
    vector< vector<int> > fourSum(vector<int> &num, int target)
    {
        vector< vector<int> > res;
        vector<int> *rp;

        if (num.empty())
            return res;

        std::sort(num.begin(), num.end());

        vector<int>::iterator p = num.begin();
        while (p < num.end() - 3)
        {
            int target_3 = target - *p;
            vector<int>::iterator l = p + 1;

            while (l < num.end() - 2)
            {
                int target_2 = target_3 - *l;
                vector<int>::iterator m = l + 1;
                vector<int>::iterator r = num.end() - 1;

                while (m < r)
                {
                    if (*m + *r == target_2)
                    {
                        rp = new vector<int>;
                        rp->push_back(*p);
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
                    else if (*m + *r < target_2)
                    {
                        m ++;
                    }
                    else
                    {
                        r --;
                    }
                }

                while (l < num.end()-2 && *(l+1) == *l)
                    l ++;
                l ++;
            }
            while (p < num.end()-3 && *(p+1) == *p)
                p ++;
            p ++;
        }

        return res;
    }
};