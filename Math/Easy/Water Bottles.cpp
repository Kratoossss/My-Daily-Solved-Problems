class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
        int n = bottles;
        int ans = n;
        int r = 0;
        int q = 0;
        while(n >= exchange)
        {
            r = n % exchange;
            q = n / exchange;
            n = r + q;
            ans += q;
        }
        return ans;
    }
};