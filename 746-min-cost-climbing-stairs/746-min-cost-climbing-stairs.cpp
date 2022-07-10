class Solution {
public:
    int minCostClimbingStairs(vector<int>& c) 
    {
//         int l=c.size();
//         int sum=0;
//         int i;
//         for(i=0;i<l-1;i+=2)
//         {
            
//             if(c[i]<c[i+1])
//             {
//                 sum+=c[i+1];
                
//             }
//             else
//             {
//                 sum+=c[i];
//                 i-=1;
//             }
           
//         }
//         return sum;
        int l = c.size();
        for(int i= 2;i<l;i++) 
        {
            c[i]+=min(c[i-1],c[i-2]);
        
        }
        return min(c[l-1],c[l-2]);
    }
};