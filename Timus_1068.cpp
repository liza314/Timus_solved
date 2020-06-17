#include<bits/stdc++.h>
using namespace std;
int main()
{
    #include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, sum=0, i;

    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(n>0)
    {
        for(i=1; i<=n; i++)
            sum=sum+i;
    }
    else if(n<0)
    {
        for(i=n; i<=1; i++)
            sum=sum+i;
    }
    cout<<sum<<endl;

}
