class Solution {
public:
    int fib(int n) 
    {
//         int  t1 = 0, t2 = 1, nextTerm = 0;
//         int ans=0;
//         for (int i = 1; i <= n; i++) 
//         {
        
//         if(i == 1) {
//             ans+=t1;
            
//         }
//         if(i == 2) {
//            ans+=t2;
            
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
        
//         ans+=nextTerm;
//         }
//         return ans;
//         if (n <= 1) return n;
//         int a = 0, b = 1;
//         while (n--) {
//             int c = a + b;
//             a = b;
//             b = c;
//         }
//         return b;
        if(n <= 1) 
            return n;
        return fib(n-1)+fib(n-2);
        
    }
};