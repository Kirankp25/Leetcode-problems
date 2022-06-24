class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        int l1=nums1.size();
        int l2=nums2.size();
        vector<int>kp;
        for(int i=0;i<l1;i++)
        {
           if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
           {
                kp.push_back(nums1[i]);
                nums2.erase(find(nums2.begin(),nums2.end(),nums1[i]));
            }
        }
        return kp;
    }
};