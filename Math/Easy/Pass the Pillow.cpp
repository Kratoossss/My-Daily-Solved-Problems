class Solution {
public:
    int passThePillow(int n, int time) {
        int flag = true;
        int count = 0;
        int pass = 1;
        while(count != time)
        {
            if(flag)
            {
                pass++;
                if(pass == n)
                {
                    flag = false;
                }
            }
            else
            {
                pass--;
                if(pass == 1)
                {
                    flag = true;
                }
            }
            count++;
        }
        return pass;
    }
};