#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}

char getMaxOccuringChar(char* str)
{
    int arr[255] = {0};
    int n = strlen(str);
    int max = 0; 
    for(int i=0;i<n;i++){
        arr[str[i]]++;
    }
    for(int i=0;i<255;i++){
        if(arr[max]<arr[i]){
            max = i;
        }
    }
    return char(max);
}

