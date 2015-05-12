class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int l=0, r=n, len=n;

        while (l < r)
        {
            if (A[l] == elem)
            {
                r--;
                swap(A[l], A[r]);
                len--;
            }
            else
            {
                l++;
            }
        }

        return len;
    }
};