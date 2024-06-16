class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int n = coins.size();
        int values = 1;
        for(int i=0 ; i<n ; i++)
        {
            if(coins[i] <= values)
            {
                values += coins[i];
            }
        }
        return values;
    }
};