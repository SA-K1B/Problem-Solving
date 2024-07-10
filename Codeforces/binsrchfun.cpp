#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector  <int> ar={4,8,12,34,126};
    cout<<upper_bound(ar.begin(),ar.end(),5)-ar.begin()<<endl;


}
