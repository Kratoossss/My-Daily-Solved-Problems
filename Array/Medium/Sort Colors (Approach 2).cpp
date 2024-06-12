class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp; //<number,frequency>
        for(int i=0 ; i<n ; i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto i:mp)
        {
            for(int j=0 ; j<i.second ; j++)
            {
                nums.push_back(i.first);
            }
        }
    }
};