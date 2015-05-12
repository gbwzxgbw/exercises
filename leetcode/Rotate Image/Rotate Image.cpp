class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        vector<int>::size_type n = matrix.size();

        for (vector<int>::size_type i = 0; i < n; i++)
        {
            for (vector<int>::size_type j = i+1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (vector<int>::size_type i = 0; i < n; i++)
        {
            for (vector<int>::size_type j = 0; j < n/2; j++)
            {
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }
};