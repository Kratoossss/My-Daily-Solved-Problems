class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0 ; i<n ; i++)
        {
            int start = 0;
            int end = m-1;
            while(start <= end)
            {
                int mid = (start+end)/2;
                long long temp = (long long)potions[mid]*spells[i];
                if(temp < success)
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
            ans.push_back(m-start);
        }
        return ans;
    }
};