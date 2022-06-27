class Solution {
public:
    bool isAnagram(string s, string t) {
        int ls=s.length();
        int lt=t.length();
        if(ls!=lt)
            return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for (int i = 0; i < ls; i++)
            if (s[i] != t[i])
                return false;
 
    return true;
        
    }
};