class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n == 3)
        {
            return nums[0]*nums[1]*nums[2];
        }
        int temp = INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            int j = i+1;
            int k = j+1;
            while(k <= n-1)
            {
                int prod = nums[i]*nums[j]*nums[k];
                if(prod > temp)
                {
                    temp = max(temp,prod);
                }
                k++;
            }
        }
        return temp;
    }
};