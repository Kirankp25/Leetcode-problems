class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        int lm=nums[0];
        int cm=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            lm=max(lm+nums[i],nums[i]);
            cm=max(cm,lm);
        }
        return cm;
   
        
    }
};
