class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        int i=0;
        vector<pair<int,int>> pr(n);
        for(int i=0 ; i<n ; i++)
        {
            pr[i] = {capital[i],profits[i]};
        }
        sort(pr.begin(),pr.end());
        priority_queue<int> pq;
        while(k--)
        {
            while(i<n && pr[i].first <= w)
            {
                pq.push(pr[i].second);
                i++;
            }
            if(pq.empty())
            {
                break;
            }
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};