class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& matrix, int r, int c) {
        
        int m = matrix.size();
        
        if(m == 0)
            return matrix;
        
        int n = matrix[0].size();
        
        if (n*m != r*c)
            
            return matrix;
        
        vector<vector<int>> kp(r, vector<int>(c));
        
        int temp=0;
        
        for(int i=0; i<m; i++)
            
            for(int j=0; j<n; j++)
            {
                int rw = temp/c;
                int cl = temp%c;
                
                kp[rw][cl] = matrix[i][j];
                
                temp++;
            }
    
        return kp;
        
        
    }
};