class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double total_wait_time = 0;
        int current_time = 0;
        for(int i=0 ; i<n ; i++)
        {
            int arrival_time = customers[i][0];
            int cook_time = customers[i][1];
            if(current_time < arrival_time)
            {
                current_time = arrival_time;
            }
            int wait_time = current_time + cook_time - arrival_time;
            total_wait_time += wait_time;
            current_time += cook_time;
        }
        return total_wait_time/n;
    }
};