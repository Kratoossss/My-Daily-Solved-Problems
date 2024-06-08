class Solution{
public:
    int print2smallest(int arr[], int n) {
	    int smallest = arr[0];
	    int ssmallest = INT_MAX;
	    for(int i=1 ; i<n ; i++)
	    {
	        if(arr[i] < smallest)
	        {
	            ssmallest = smallest;
	            smallest = arr[i];
	        }
	        else if(arr[i] != smallest && arr[i] < ssmallest)
	        {
	            ssmallest = arr[i];
	        }
	    }
	    return ssmallest;
	}
};