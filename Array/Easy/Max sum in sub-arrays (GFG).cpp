class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        long long ans = 0;
        for(int i=0 ; i<N-1 ; i++)
        {
            long long sum = arr[i] + arr[i+1];
            ans = max(ans,sum);        
        }
        return ans;
    }
};