class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n==0)
            return 0;

        int k=0, s=0, e=0;

        while (e < n)
        {
            while (A[s] == A[e] && e < n)
            {
                e++;
            }
            if (e < n)
            {
                k++;
                A[k] = A[e];
                s = e;
            }
        }

        return k+1;
    }
};