// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int,int> us;
        for(int i=0;i<n;i++){
            us[arr[i]]++;
        }
        vector<int> ans;
        for(auto x : us){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    Solution obj;
	    v = obj.printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends
