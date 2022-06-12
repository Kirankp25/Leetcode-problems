class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {

        int h[10001] = {0};
        int l = 0;
        int r = 0;
        int sum = 0;
        int ans = 0;
        while(l<=r and r<nums.size())
        {
            while(h[nums[r]]>=1)
            {
                h[nums[l]]--;
                sum-=nums[l];
                l++;
            }
            sum += nums[r];
            h[nums[r]]++;
            r++;
            ans = max(ans,sum);
        }
        return ans;
        
    }
};