class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
       int count = 0;
       for(int i=0 ; i<N ; i++)
       {
           if(arr[i] == K)
           {
               count++;
               break;
           }
       }
       if(count == 0)
       {
           return -1;
       }
       else
       {
            return count;           
       }
    }
};