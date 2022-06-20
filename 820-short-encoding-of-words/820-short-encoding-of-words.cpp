class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) 
    {
        set<string> str(words.begin(), words.end()); 
        for(auto &word: words)
        {
            for(int i=1; i<word.size(); i++) 
                str.erase(word.substr(i));
        }
        
        int result=0;
    
        for(auto word:str)
            result += word.size()+1;
        
        return result;
        
    }
};