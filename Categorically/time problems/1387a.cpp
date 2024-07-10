#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ch,cm,th,tm;
    scanf("%d:%d",&ch,&cm);
    scanf("%d:%d",&th,&tm);
    int x=ch-th;
    int y=cm-tm;
    if(y<0)
        x--;
    if(x<0){
        x=24+x;
        if(y<0){
            printf("%02d:%02d\n",x,60-abs(y));
        }
        else{
            printf("%02d:%02d\n",x,y);
        }
    }
    else{
        if(y<0){
            printf("%02d:%02d\n",x,60-abs(y));
        }
        else{
            printf("%02d:%02d\n",x,y);
        }
    }
    return 0;
}

