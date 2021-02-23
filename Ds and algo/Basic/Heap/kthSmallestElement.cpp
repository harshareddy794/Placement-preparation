#include <iostream>
#include<queue>

using namespace std;

void smallest()

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 }, k = 2; 
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> pg;
    for(int i=0;i<n;i++){
        pg.push(arr[i]);    
    }
    for(int i=1;i<k;i++){
        pg.pop();    
    }
    cout<<pg.top();
    
    
   
    return 0;
}
