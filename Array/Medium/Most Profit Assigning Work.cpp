class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int j = 0;
        int gain = 0;
        int maxgain = 0;
        int n = profit.size();
        vector<pair<int,int>> pr(n);
        for(int i=0 ; i<n ; i++)
        {
            pr.push_back({difficulty[i],profit[i]});
        }
        sort(pr.begin(),pr.end());
        sort(worker.begin(),worker.end());
        for(int i=0 ; i<worker.size() ; i++)
        {
            while(j<pr.size()  && pr[j].first <= worker[i])
            {
                maxgain = max(maxgain,pr[j].second);
                j++;
            }
            gain += maxgain;
        }
        return gain;
    }
};