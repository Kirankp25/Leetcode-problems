// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int dp[501][501];
  int us(string& s,string& t,int a,int b)
  {
      if(a>=s.size()) return 501;
      if(b>=t.size()) return 1;
      
      if(dp[a][b]!=-1) return dp[a][b];
      int kp=b;
      for(;kp<t.size();kp++){
          if(s[a]==t[kp]) break;
      }
      if(kp==t.size()) return 1;
      
      return dp[a][b]=min(us(s,t,a+1,b),1+us(s,t,a+1,kp+1));
      
  }
    int shortestUnSub(string S, string T) {
        memset(dp,-1,sizeof(dp));
        int ans=us(S,T,0,0);
        if(ans>=501) return -1;
        return ans;
        
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        cin>>S>>T;

        Solution ob;
        cout << ob.shortestUnSub(S,T) << endl;
    }
    return 0;
}  // } Driver Code Ends