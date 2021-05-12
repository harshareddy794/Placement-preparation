// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> um;
        for(int i=0;i<n;i++){
            um[arr[i]]++;
        }
        vector<string> ans;
        int maxVal = INT_MIN;
        string name;
        for(auto x : um){
            if(maxVal<x.second){
                maxVal = x.second;
                name = x.first;
            }
            if(maxVal==x.second &&(name>x.first)){
                name = x.first;
            }
        }
        ans.push_back(name);
        ans.push_back(to_string(maxVal));
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

