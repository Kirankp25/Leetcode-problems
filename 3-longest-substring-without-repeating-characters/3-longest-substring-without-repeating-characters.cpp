class Solution {
public:
    int lengthOfLongestSubstring(string s){
        
     unordered_map<int, int> kMap;
        
        int n = s.length();
        
        int L = 0;
        int R = 0;
        
        int ans = 0;
        
        while(R < n) 
        {
            char right = s[R++];
            kMap[right]++;
            
            while(kMap[right] > 1) 
            {
                char left = s[L++];
                kMap[left]--;            
            }
            
            ans = max(ans, R - L);
        }
        
        return ans;
    }
};
