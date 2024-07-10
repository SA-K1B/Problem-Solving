#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;
int lcs(string X,string Y,int s1,int s2){
    int l[s1+1][s2+1];
    for(int i=0;i<=s1;i++){
        for(int j=0;j<=s2;j++){
            if(i==0||j==0)
                l[i][j]=0;
            else if(X[i-1]==Y[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }
    return l[s1][s2];
}
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string X,Y;
    while(getline(cin,X)){
        getline(cin,Y);
        int s1=X.size();
        int s2=Y.size();
        int ans=lcs(X,Y,s1,s2);
        cout<<ans<<endl;
    }
    return 0;
}

