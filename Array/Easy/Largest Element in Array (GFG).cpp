class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        int ans = arr[n-1];
        return ans;
    }
};