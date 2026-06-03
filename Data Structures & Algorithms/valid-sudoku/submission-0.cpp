class Solution {
    bool validateGraph(vector<vector<char>>& board,int sr, int er,int sc,int ec)
        {
            unordered_set<char>st;
            for(int row=sr;row<=er;row++)
            {
                for(int col=sc;col<=ec;col++)
                {
                    if(board[row][col]=='.') continue;
                    if(st.find(board[row][col])!=st.end())
                    {
                        return false;
                    }
                    st.insert(board[row][col]);
                }
            }
            return true;

        }

public:
    bool isValidSudoku(vector<vector<char>>& board) {
         
         int n=board.size();

        //  validate rows
        for(int row=0;row<n;row++)
        {
            unordered_set<char>st;
            for(int col=0;col<n;col++)
            {
                if(board[row][col]=='.') continue;
                if(st.find(board[row][col]) != st.end())
                {
                    return false;
                }
                st.insert(board[row][col]);
            }

        }
        

        // validate column
        for(int col=0;col<n;col++)
        {
            unordered_set<char>st;
            for(int row=0;row<n;row++)
            {
                if(board[row][col]=='.') continue;
                if(st.find(board[row][col])!=st.end())
                {
                    return false;
                }
                st.insert(board[row][col]);
            }
        }
    

        // validate each 3*3 box
        for(int sr=0;sr<n;sr+=3)
        {
            int er=sr+2;
            for(int sc=0;sc<n;sc+=3)
            {
                int ec=sc+2;
                if(!validateGraph(board,sr,er,sc,ec))
                return false;
            }
        }
        return true;
        
    }
};
