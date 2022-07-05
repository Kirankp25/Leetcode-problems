class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
//         if(n.size()==0 || n.size()==1)
//             return n.size();
//         sort(n.begin(),n.end());
//         int count=1;
//         for(int i=0;i<n.size()-2;i++)
//         {
//             if((n[i]==n[i+1]) || (n[i]+1==n[i+1]))
//             {
//                 count++;
//             }
//             else
//             {
//                 break;
//             }
            
//         }
//         return count;
        unordered_set<int> s(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++) 
        {
            
            if(s.find(nums[i]-1)==s.end())
            {
                int end = nums[i];
				
                while(s.find(end)!=s.end())
                    end++;
					
                ans = max(ans,end-nums[i]);
            }
        }
        return ans;
    }
};