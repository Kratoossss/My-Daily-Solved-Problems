class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        int temp = INT_MIN;
        vector<int> ans;
        for(int i=n-1 ; i>=0 ; i--)
        {
            if(arr[i] >= temp)
            {
                ans.push_back(arr[i]);
                temp = max(arr[i],temp);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};