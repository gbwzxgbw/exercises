// Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
// Find the largest index l greater than k such that a[k] < a[l].
// Swap the value of a[k] with that of a[l].
// Reverse the sequence from a[k + 1] up to and including the final element a[n].

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        sort(num.begin(), num.end());

        vector<vector<int> > res;
        res.push_back(*(new vector<int>(num)));

        if (num.size() < 2)
        {
            return res;
        }

        while (true)
        {
            vector<int>::iterator k = num.end() - 2;
            while ( (*k) >= (*(k+1)) )
            {
                if (k == num.begin())
                    return res;
                k--;
            }

            vector<int>::iterator l = num.end() - 1;
            while ( (*k) >= (*l) )
            {
                if (l==k)
                    break;
                l--;
            }

            swap((*k), (*l));

            vector<int>::iterator n = num.end() - 1;
            k++;
            while (k < n)
            {
                swap((*k), (*n));
                n--;
                k++;
            }

            res.push_back(*(new vector<int>(num)));
        }

        return res;
    }
};