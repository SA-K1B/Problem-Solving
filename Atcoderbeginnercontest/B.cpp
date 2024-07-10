#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    ll n,x,i,j,k;
    cin>>n>>x;
    getchar();
    string s1;
    cin>>s1;
    ll sz=s1.size();
    j=0;
    while(j<sz){
        if(s1[j]=='o'){
            x++;
        }
        else{
            if(x!=0)
                x--;
        }
        j++;
    }
    cout<<x<<endl;
    return 0;
}
