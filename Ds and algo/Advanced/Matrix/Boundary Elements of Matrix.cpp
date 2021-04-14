#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        vector<int> ans;
        int R = matrix.size();
        for(int i=0;i<R;i++){
            int C = matrix[i].size();
            if(i==0 || i==R-1){
                for(int j=0;j<C;j++){
                    ans.push_back(matrix[i][j]);
                }
            }else{
                ans.push_back(matrix[i][0]);
                ans.push_back(matrix[i][C-1]);
            }
            
        }
        return ans;   
    }
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int>ans = obj.BoundaryElements(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
