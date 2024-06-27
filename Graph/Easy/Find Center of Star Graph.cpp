class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(int i=0 ; i<edges.size() ; i++)
        {
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;

        }
        int nodes = 0 ;
        for(auto i:mp)
        {
            nodes++;
        }
        for(auto i:mp)
        {
          if(i.second == nodes-1)
          {
            return i.first;
          }
        }
        return 1;
    }
};