#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=99,m=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    if(m==n)
        {
            cout<<arr[0]<<endl;
            exit;
        }
    
    else
    {
    for(int j=1;j<n;j++)
    {
        int max=arr[j]-arr[j-1];
        
        if(max<min && max>=0)
        {
            min=max;
        }
        
    }
    cout<<min<<endl;
    }
    
    

}