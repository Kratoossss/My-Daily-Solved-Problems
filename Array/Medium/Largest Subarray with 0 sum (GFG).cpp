class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        int ans = 0;
        for(int i=0 ; i<n ; i++)
        {
            sum += A[i];
            if(mp.find(sum) != mp.end())
            {
                ans = max(ans,i-mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return ans;
    }
};