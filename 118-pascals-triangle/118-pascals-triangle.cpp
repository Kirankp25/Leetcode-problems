class Solution {
public:
    vector<vector<int>> generate(int n) {
    vector<vector<int>> kp;
    kp.push_back({1});
    if (n == 1)
    {
        return kp;
    }
    kp.push_back({1, 1});
    if (n == 2)
    {
        return kp;
    }
    for (int i = 0; i < n - 2; i++)
    {
        int n = kp[i + 1].size();
        int f = 0;
        int s = 1;
        vector<int> ans;
        ans.push_back(1);
        while (f < n - 1)
        {
            int sum = kp[i + 1][f] + kp[i + 1][s];
            ans.push_back(sum);
            f++;
            s++;
        }
        ans.push_back(1);
        kp.push_back(ans);
    }
    return kp;
        
    }
};