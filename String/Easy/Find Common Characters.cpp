class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        string temp1 = words[0];
        sort(temp1.begin(),temp1.end());
        for(int i=1 ; i<n ; i++)
        {
            string temp2 = words[i];
            sort(temp2.begin(),temp2.end());
            string common = "";
            int len1 = temp1.size();
            int len2 = temp2.size();
            int j = 0;
            int k = 0;
            while(j<len1 && k<len2)
            {
                if(temp1[j] == temp2[k])
                {
                    common += temp1[j];
                    j++;
                    k++;
                }
                else if(temp1[j] < temp2[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
            }
            temp1 = common;
        }
        for(int i=0 ; i<temp1.size() ; i++)
        {
            string c = "";
            c += temp1[i];
            ans.push_back(c);
        }
        return ans;
    }
};