class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> start;
        vector<int> end;
        for(int i=0 ; i<n ; i++)
        {
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        temp.push_back(start[0]);
        for(int i=0 ; i<n-1 ; i++)
        {
            if(end[i] < start[i+1])
            {
                temp.push_back(end[i]);
                ans.push_back(temp);
                temp.clear();
                temp.push_back(start[i+1]);
            }
        }
        temp.push_back(end[end.size()-1]);
        ans.push_back(temp);
        return ans;
    }
};