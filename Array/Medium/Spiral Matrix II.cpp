class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int count=1;
        int minr=0 , maxr=n-1;
        int minc=0 , maxc=n-1;
        //vector<vector<int>> arr;
        vector<vector<int>>arr(n,vector<int>(n));
        while(minr<=maxr && minc<=maxc)
        {
            for(int i=minc ; i<=maxc ; i++)
            {
                arr[minr][i] = count++;
            }
            minr++;
            for(int i=minr ; i<=maxr ; i++)
            {
                arr[i][maxc]=count++;
            }
            maxc--;
            for(int i=maxc ; i>=minc ; i--)
            {
                arr[maxr][i]=count++;
            }
            maxr--;
            for(int i=maxr ; i>=minr ; i--)
            {
                arr[i][minc]=count++;
            }
            minc++;
        }
        return arr;
    }
};