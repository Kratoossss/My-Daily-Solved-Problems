class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int n = ops.size();
        int ans = 0;
        for(int i=0 ; i<n ; i++)
        {
            if(ops[i] == "C")
            {
                v.pop_back();
            }
            else if(ops[i] == "D")
            {
                v.push_back(2 * v[v.size()-1]);
            }
            else if(ops[i] == "+")
            {
                v.push_back(v[v.size()-1] + v[v.size()-2]);
            }
            else
            {
                v.push_back(stoi(ops[i]));
            }
        }
        for(int i=0 ; i<v.size() ; i++)
        {
            ans += v[i];
        }
        return ans;
    }
};