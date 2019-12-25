#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,n;
    cin>>n;
    if(n>0){
        for (int i = 1; i <= n; i++)
        {
                sum+= i;
            
        }
                cout <<sum<<endl;
    }
    else if(n<=0){
        for (int i = n; i <= 1; i++)
        {
                sum+= i;
            
        }
                cout <<sum<<endl;
    }
}