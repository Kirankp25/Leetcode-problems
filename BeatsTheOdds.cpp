#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c[t];
    while(t--)
    {
        int f=0;
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
        c[f++]=count/2;
        }

        for(int i=0;i<t;i++)
        {
            cout<<c[i]<<endl;
        }
    return 0;
}