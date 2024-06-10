class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int count = 0;
        int sum = 0;
        unordered_map<int,int> mp;
        for(int i=0 ; i<N ; i++)
        {
            sum += A[i];
            if(sum == K)
            {
                count = i+1;
            }
            else if(mp.find(sum-K) != mp.end())
            {
                count = max(count,i-mp[sum-K]);
            }
            if(mp.find(sum) == mp.end())   //IMPORTANT TO INCLUDE OTHERWISE NOT PASSSES ALL TEST CASE
            {
                mp[sum] = i;
            }
        }
        return count;
    } 

};