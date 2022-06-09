// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

 

// Example 1:

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
// Example 2:

// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
// Example 3:

// Input: numbers = [-1,0], target = -1
// Output: [1,2]
// Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int s=0;
        int e=numbers.size()-1;
        vector<int>kp;
        
        while(s<e)
        {
            if(numbers[s]+numbers[e]>target) 
            {
                e--;
            }
            else if(numbers[s]+numbers[e]<target)
                    {
                        s++;
                    }
                    else
                    {
                        kp.push_back(s+1);
                        kp.push_back(e+1);
                        break;
                    }
        }
        
        return kp;
    
//         int s=0;
//         int e=numbers.size()-1;
//         vector<int>v;
//         while(s<e)
//         {
//             if((numbers[s]+numbers[e])==target )
//             {
//                 v.push_back(s);
//                 v.push_back(e);
//             }
//             else if((numbers[s]+numbers[e])>target)
//             {
//                 e--;
//             }
//             else
//             {
//                 s++;
//             }
                
//         }
             
//         vector<int>v;
//         int s=numbers.size();
//         for(int i=0;i<s;i++)
//         {
//             int temp=numbers[i];
            
//             for(int j=i+1;j<s;j++)
//             {
//                 if((temp+numbers[j])==target)
//                 {
//                     v.push_back(i+1);
//                     v.push_back(j+1);
//                     break;
//                 }
                
//             }
//         }
        
    }
};