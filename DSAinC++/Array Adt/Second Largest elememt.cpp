// Given an array Arr of size N, print second largest distinct element from an array.


#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	
	int print2largest(int arr[], int n) {
	    // code here
	    int ans=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>ans)
            ans=arr[i];
        }
       
        int second=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=ans)
            second =max(second,arr[i]);
        }
        
        return second;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
