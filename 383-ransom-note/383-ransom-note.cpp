class Solution 
{
public:
    bool canConstruct(string r, string m) 
    {
        unordered_map<char,int> kp;
        
        for(int i=0;i<r.size();i++)
        {
            kp[r[i]]++;
        }
        
        for(int i=0;i<m.size();i++)
        {
            kp[m[i]]--;
            if(kp[m[i]]<=0)
                kp.erase(m[i]);
        }
        
        if(kp.size()==0)
            return true;
        return false;
    }
};