class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int row=0;row<n;row++)
        {
            for(int col=row+1;col<n;col++)
            {
                swap(matrix[row][col],matrix[col][row]);
            }
        }

        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

       
    }
};
