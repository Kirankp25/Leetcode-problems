// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
            int s=0;
            int e=5*n;
            int result=s;
            while(s<=e)
            {
                int mid=(s+e)/2;
                int zero=zeroes(mid);
                if(zero>=n){
                    result=mid;
                    e=mid-1;
                }
                else
                s=mid+1;
            }
            return result;
        //complete the function here
        }
        int zeroes(int x)
        {
            int d=5;
            int z=0;
            while(x>=d)
            {
                z+=(x/d);
                d*=5;
            }
            return z;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends