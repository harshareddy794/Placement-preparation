#include <bits/stdc++.h>

using namespace std;

void urlify(char arr[],int n){
    int space_count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            space_count++;
        }
    }
    
    int new_size = n+(space_count*2);
    int back = new_size;
    for(int i=n;i>=0;i--){
        if(arr[i]!=' '){
            arr[back] = arr[i];
            back--;
        }else{
            arr[back] = '0';
            arr[back-1] = '2';
            arr[back-2] = '%';
            back = back-3;
        }
    }
    for(int i=0;i<new_size;i++){
        cout<<arr[i];
    }
    cout<<endl;
} 


int main()
{   int t;
    cin>>t;
    while(t>0){
        int size = 1005;
        char a[size];
        cin>>a;
        int n;
        cin>>n;
        urlify(a,n);
        t--;
    }
    return 0;
}
