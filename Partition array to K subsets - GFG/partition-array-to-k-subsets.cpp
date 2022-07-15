// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
  bool isKPartitionPossibleRec(int arr[], int subsetSum[], bool taken[],
                   int subset, int Kp, int N, int curIdx, int limitIdx)
    {
    if (subsetSum[curIdx] == subset)
    {
        if (curIdx == Kp - 2)
            return true;
 
        
        return isKPartitionPossibleRec(arr, subsetSum, taken, subset,
                                            Kp, N, curIdx + 1, N - 1);
    }
 
    
    for (int i = limitIdx; i >= 0; i--)
    {
        
        if (taken[i])
            continue;
        int tmp = subsetSum[curIdx] + arr[i];
 
       
        if (tmp <= subset)
        {
           
            taken[i] = true;
            subsetSum[curIdx] += arr[i];
            bool nxt = isKPartitionPossibleRec(arr, subsetSum, taken,
                                            subset, Kp, N, curIdx, i - 1);
 
            
            taken[i] = false;
            subsetSum[curIdx] -= arr[i];
            if (nxt)
                return true;
        }
    }
    return false;
}
 

bool isKPartitionPossible(int arr[], int N, int Kp)
{
    
    if (Kp == 1)
        return true;
 
    
    if (N < Kp)
        return false;
 
    
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];
    if (sum % Kp != 0)
        return false;
 
    
    int subset = sum / Kp;
    int subsetSum[Kp];
    bool taken[N];
 
    for (int i = 0; i < Kp; i++)
        subsetSum[i] = 0;
 
    
    for (int i = 0; i < N; i++)
        taken[i] = false;
 
    
    subsetSum[0] = arr[N - 1];
    taken[N - 1] = true;
 
    
    return isKPartitionPossibleRec(arr, subsetSum, taken,subset, Kp, N, 0, N - 1);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends