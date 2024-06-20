class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int left = 0;
        int right = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = -1;
        while(left <= right)
        {
            int bouq_count = 0;
            int j = 0; 
            int mid = (left+right)/2;
            for(int i = 0 ; i<n ; i++)
            {
                if(bloomDay[i] <= mid)
                {
                    j++;
                }
                else
                {
                    j = 0;
                }
                if(j == k)
                {
                    j = 0;
                    bouq_count++;
                }
            }
            if(bouq_count >= m)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
            
        }
        return ans;
        
    }
};