class Solution {
public:
    int minDistance(string word1, string word2) 
    {
    int n=word1.size();      // length of word1
    int m=word2.size();     // length of word2
    vector<vector<int>> kp(n+1,vector<int>(m+1,0));
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(word1[i-1]==word2[j-1])
            {
                kp[i][j]=1+kp[i-1][j-1];          
            }
            else
            {
                kp[i][j]=max(kp[i-1][j],kp[i][j-1]);
            }
        }
    }
    
    int fn=kp[n][m];         
    int op=n+m-(2*fn);     
    return op;
}
};
        