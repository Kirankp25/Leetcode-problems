#include<iostream>
using namespace std;
int main()
{
    int arr[t][n];

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            }
            int temp=arr[0];
           int count=0;
        for(int i=1;i<n;i++)
        {
            if((temp+arr[i])%2!=0) count++;
            temp=arr[i];
        }
        cout<<(count/2);
        }
    return 0;
}