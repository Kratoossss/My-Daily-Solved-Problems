class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double temp =INT_MIN;
        double prod = 1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            prod *= nums[i];
            temp = max(temp,prod);
            if(prod == 0)
            {
               prod = 1;
            }
        }
        prod = 1;
        for(int i=nums.size()-1 ; i>=0 ; i--)
        {
            prod *= nums[i];
            temp = max(temp,prod);
            if(prod == 0)
            {
                prod = 1;
            }
        }
        return temp;
    }
};