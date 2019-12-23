#include <bits/stdc++.h>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(4);
    vector<double>my ;
    double n;
    while(cin>>n){
        my.push_back(n);
    }
     for(int i=my.size()-1;i>=0;i--) {
         cout<<sqrt(my[i])<<endl;
     }
    
}
