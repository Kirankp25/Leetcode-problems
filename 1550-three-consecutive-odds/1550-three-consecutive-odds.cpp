class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int Count = 0;
        for (int i = arr.size() -1; i >= 0; --i) {
            Count = arr[i] % 2 == 0 ? 0 : Count + 1;
            if (Count == 3) return true;
        }
        return false;
        
        
    }
};