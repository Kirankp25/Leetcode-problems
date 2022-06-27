class Solution {
public:
    int firstUniqChar(string s) 
    {
       unordered_map<char,int> kp;
        for(int i=0;i<s.length();i++)
        {
            kp[s[i]]++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(kp[s[i]]==1) 
                return i;
        }
        
        return -1;
        
    }
};
