class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++){
            unordered_map<char,int> row,col,box;
            for(int j=0;j<9;j++){
                if(row.count(b[i][j]) && b[i][j]!='.') 
                    return false;
                else row[b[i][j]]=0;
                if(col.count(b[j][i]) && b[j][i]!='.') 
                    return false;
                else col[b[j][i]]=0;
                if(box.count(b[3*(i/3)+j/3][3*(i%3)+j%3]) && b[3*(i/3)+j/3][3*(i%3)+j%3]!='.') 
                    return false;
                else box[b[3*(i/3)+j/3][3*(i%3)+j%3]]=0;
            }
        }
        return true;
        
    }
};