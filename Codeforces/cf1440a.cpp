#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t,n,c0,c1,h,a,r,s;
    string s1;
    cin>>t;
    while(t--){
        cin>>n>>c0>>c1>>h;
        getchar();
        cin>>s1;
        int sum2,j=0,sum1=0,z=0,o=0;
        while(j<n){
            if(s1[j]=='0'){
                z++;
                sum1+=c0;
            }
            else {
                    o++;
                    sum1+=c1;
            }
           j++;
        }
        if(c0>c1){
            int a=z*h;
             sum2=a+(c1*n);
        }
        else{
            int a=o*h;
             sum2=a+(c0*n);
        }
        cout<<min(sum1,sum2)<<endl;
    }
    return 0;
}
