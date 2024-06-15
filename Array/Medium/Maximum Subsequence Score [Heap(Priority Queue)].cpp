class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        long long ans = 0;
        long long score = 0;
        vector<pair<int,int>> pr(n);
        for(int i=0 ; i<n ; i++)
        {
            pr[i] = {nums2[i],nums1[i]};
        }
        sort(pr.begin(),pr.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=n-1 ; i>=0 ; i--)
        {
            pq.push(pr[i].second);
            score += pr[i].second;
            if(pq.size() > k)
            {
                score -= pq.top();
                pq.pop();
            }
            if(pq.size() == k)
            {
                ans = max(ans,score*pr[i].first);
            }
        }
        return ans;
    }
};