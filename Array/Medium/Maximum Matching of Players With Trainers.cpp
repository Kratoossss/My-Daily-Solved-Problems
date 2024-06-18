class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count = 0;
        sort(players.begin(),players.end(),greater<int>());
        priority_queue<int> pq;
        for(int i=0 ; i<trainers.size() ; i++)
        {
            pq.push(trainers[i]);
        }
        for(int i=0 ; i<players.size() ; i++)
        {
            if(players[i] <= pq.top())
            {
                count++;
                pq.pop();
            }
            if(pq.empty())
            {
                break;
            }
        }
        return count;
    }
};