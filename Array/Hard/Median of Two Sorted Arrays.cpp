class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        float sum;
        for(int i=0 ; i<nums1.size() ; i++)
        {
            temp.push_back(nums1[i]);
        }
        for(int i=0 ; i<nums2.size() ; i++)
        {
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(),temp.end());
        int n = temp.size();
        int start = 0;
        int end = n-1;
        int mid = (end - start)/2;
        if(n%2 == 1)
        {
            return temp[mid];
        }
        else
        {
            float sum = (float)(temp[mid]+temp[mid+1])/2;
            return sum;
        }
        return{};
    }
};
