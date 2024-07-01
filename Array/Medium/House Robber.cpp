class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
        {
            return nums[0];
        }
        int a = nums[0];
        int b = nums[1];
        int maxi = a;
        for(int i=2 ; i<n ; i++)
        {
            int temp = nums[i] + max(a,maxi);
            maxi = max(b,maxi);
            a = b;
            b = temp;
        }
        maxi = max(maxi,b);
        return maxi;
    }
};