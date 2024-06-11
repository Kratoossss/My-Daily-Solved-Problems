class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int,int> mp; //<arr1 elements,frequency>
        for(int i=0 ; i<arr1.size() ; i++)
        {
            mp[arr1[i]]++;
        }
        for(int i=0 ; i<arr2.size() ; i++)
        {
            if(mp.find(arr2[i]) != mp.end())
            {
                int m = mp[arr2[i]];
                for(int j=0 ; j<m ; j++)
                {
                    mp[arr2[i]]--;
                    ans.push_back(arr2[i]);
                    if(mp[arr2[i]] == 0)
                    {
                        mp.erase(arr2[i]);
                    }
                }
            }
        }
        for(auto i:mp)
        {
            int n = i.second;
            for(int j=0 ; j<n ; j++)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};