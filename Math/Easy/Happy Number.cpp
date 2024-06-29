class Solution {
public:
    bool isHappy(int n) {
        for(int i = 0 ; i < 100 ; i++)
        {
            int temp = n;
            n = 0;
            while(temp > 0)
            {
                n += pow(temp % 10, 2);
                temp /= 10;
            }
            if(n == 1)
            {
                return true;
            }
        }
        return false;
    }
};