#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0;
    cin>>k;
    if ( k % 2 == 1)
    {
        int arr[k];
        for(int j=0;j<k;j++)
        {
            cin>>arr[j];
            
        }
        sort(arr, arr+k); 
       
        
        for(int i = 0; i<=k/2; i++){
        sum+=(arr[i]+1)/2;
    }
            
            
        
        
    }
    cout<<sum<<endl;
}