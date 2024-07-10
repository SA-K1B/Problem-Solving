#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int a[100005],b[100005];
int lcs(int n){
    int l[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0)
                l[i][j]=0;
            else if(a[i-1]==b[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }
    return l[n][n];
}
int main()
{
   // freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
         for(int i=0;i<n;i++)
            cin>>b[i];
        int ans=lcs(n);
        cout<<ans<<endl;
    }
    return 0;
}


