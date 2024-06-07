class Solution {
public:

    string findRoot(string &word, set<string> &s){
        for(int i=1 ; i<=word.size() ; i++)
        {
            string root = word.substr(0,i);
            if(s.count(root))
            {
                return root;
            } 
        }
        return word;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> s;
        for(int i=0 ; i<dictionary.size() ; i++)
        {
            s.insert(dictionary[i]);
        }
            stringstream ss(sentence);
            string word;
            string result;
            while(getline(ss,word,' '))
            {
                result += findRoot(word,s) + " ";
            }

        result.pop_back();
        return result;
    }
};