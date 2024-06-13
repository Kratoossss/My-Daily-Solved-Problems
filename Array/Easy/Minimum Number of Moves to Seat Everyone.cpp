class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        int sum = 0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0 ; i<n ; i++)
        {
            int moves = abs(students[i] - seats[i]);
            sum += moves;
        }
        return sum;
    }
};