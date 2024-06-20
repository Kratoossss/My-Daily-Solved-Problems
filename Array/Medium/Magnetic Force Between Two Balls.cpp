class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int minForce = 1;
        int maxForce = position[n-1]-position[0];
        int ans = 0;
        while(minForce <= maxForce)
        {
            int mid = (minForce+maxForce)/2;
            int lastPosition = position[0];
            int balls = 1;
            for(int i=1 ; i<n ; i++)
            {
                if(position[i] - lastPosition >= mid)
                {
                    lastPosition = position[i];
                    balls++;
                }
            }
            if(balls >= m)
            {
                ans = mid;
                minForce = mid + 1;
            }
            else
            {
                maxForce = mid - 1;
            }
        }
        return ans;
    }
};