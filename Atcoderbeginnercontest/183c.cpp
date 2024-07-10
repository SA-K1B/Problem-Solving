#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,n,k,a[10][10];
    ll b[]={1,2,3,4,5,6,7,8};
    cin>>n>>k;
    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++)
            cin>>a[i][j];
    }
    ll cnt=0;
    ll sum=0;
    for(j=0;j<n-1;j++){
            sum+=a[b[j]][b[j+1]];
        }
     sum+=a[b[j]][b[0]];
    if(k==sum)
        cnt++;
    while(next_permutation(b+1,b+n)){
        sum=0;
        for( j=0;j<n-1;j++){
            sum+=a[b[j]][b[j+1]];
        }
         sum+=a[b[j]][b[0]];
        if(k==sum)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

