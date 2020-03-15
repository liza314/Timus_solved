#include<bits/stdc++.h>
using namespace std;
int main(){
   double n;
   vector<double> vec; 
    while (cin >> n)
    {
       double result = sqrt(n);
       vec.push_back(result);
    }
    int size = vec.size();
    reverse(vec.begin(),vec.end());
    for(int i=0;i<size;i++)
    {
        cout<<fixed<<setprecision(4)<<vec[i]<<" ";
    }
}