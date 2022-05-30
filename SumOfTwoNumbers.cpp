/*
Given two integers a and b, return the sum of the two integers without using the operators + and -.

 

Example 1:

Input: a = 1, b = 2
Output: 3
Example 2:

Input: a = 2, b = 3
Output: 5
*/
class Solution {
public:
    int getSum(int a, int b) 
    {
        int sum = 0;
        if(a>0)
        for(int i =1;i<=a;i++)
        {
            sum+=1;
        }
        if(b>0)
        for(int j=1;j<=b;j++)
        {
            sum+=1;
        }
        if(a<0)
        for(int i =a;i<=-1;i++)
        {
            sum-=1;
        }
        if(b<0)
        for(int i =b;i<=-1;i++)
        {
            sum-=1;
        }
    return sum;
        
    }
};