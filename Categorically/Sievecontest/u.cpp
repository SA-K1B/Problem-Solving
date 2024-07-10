#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b){
   if(a==0)
     return b;
   else return gcd(b%a,a); }
int main()
{
    //freopen("i.txt","r",stdin);
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int g=gcd(n,k);
        //cout<<g<<endl;
        int cnt=0;
        for(int i=1;i*i<=g;i++){
            if(g%i==0){
                int x=g/i;
                if(x!=i)
                    cnt+=2;
                else cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
