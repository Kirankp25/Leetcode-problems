class Solution 
{
public:
    int minOperations(vector<int>& nums, int x) 
    {
       int ttl = 0;
       for(int i : nums)//to take a total of a array elements
           ttl+=i;
        
       int tgt = ttl -x;
       if(tgt<0)
            return -1;
       if(tgt ==0)
            return nums.size();
        
    int left = 0, j = 0, sum = 0;
    int ml = -1;
   
    while (j < nums.size()) //iterate all the condition
    {
        sum += nums[j];
        if (sum < tgt) 
        {
            j++;
        }
        else if (sum == tgt) 
        {
            ml = max(ml, j-left+1);
            j++;
        }
        else if (sum > tgt) 
        {
            while (sum > tgt) 
            {
                sum -= nums[left];
                 left++;
            }
              if(sum == tgt){
              ml = max(ml, j-left+1);
            }
            j++;
        }
    }
        
    if(ml==-1)
        return -1;
        
        return nums.size()-ml;
    }};