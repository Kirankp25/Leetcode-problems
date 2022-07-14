class Solution {
public:
    int romanToInt(string s) {
        
        int n = s.size();
        
        map<char,int> kp;
        
        kp.insert({'I',1});
        kp.insert({'V',5});
        kp.insert({'X',10});
        kp.insert({'L',50});
        kp.insert({'C',100});
        kp.insert({'D',500});
        kp.insert({'M',1000});
        
        int res = kp[s[n-1]];
        
        for(int i=n-2;i>=0;i--){
            
            if(kp[s[i]] < kp[s[i+1]])
                res -= kp[s[i]];
            else
                res += kp[s[i]];
        }
        return res;
        
    }
};