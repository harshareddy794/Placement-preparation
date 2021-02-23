#include <iostream>
#include<queue>

using namespace std;

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 }, k = 3; 
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> pg(arr,arr+5);
    for(int i=1;i<k;i++){
        pg.pop();    
    }
    cout<<pg.top();
    return 0;
}
