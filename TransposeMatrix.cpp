/*
Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.



 

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
Example 2:

Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int rows=matrix.size();
        int colums=matrix[0].size();
        
        vector<vector<int>>v(colums,vector<int>(rows,0));
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                v[j][i]=matrix[i][j];
            }
        }
        return v;
        
        
    }
};