/* 
Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

 

Example 1:

Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.
Example 2:

Input: num = 8
Output: 4
Explanation: 
Step 1) 8 is even; divide by 2 and obtain 4. 
Step 2) 4 is even; divide by 2 and obtain 2. 
Step 3) 2 is even; divide by 2 and obtain 1. 
Step 4) 1 is odd; subtract 1 and obtain 0.
Example 3:

Input: num = 123
Output: 12
*/
#include<iostream>
using namespace std;
 
int approach01(int num)
{
    int step=0;

    while(num>0)
    {
        if(num%2==0)
        {
            step++;
            num/=2;
        }
        else
        {
            step++;
            num-=1;
        }
    }
    return step;
}
int approach02(int num)
{
    if(!num)
            return 0;
        int c1=0,c0=0; 
        while(num>0) 
        {
            if(num&1) 
                c1++; 
            else
                c0++; 
            num=num>>1; 
        }
        return (2*c1-1+c0); 
    }

int main()
{
    int n=14;
    //cin>>n;
    //approach 01
    cout<<approach01(n)<<endl;
    cout<<approach02(n)<<endl;
    //cout<<5/2;
    return 0;
}