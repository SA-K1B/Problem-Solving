#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    string s;
    cin>>s;
    getchar();
    int x,m,y;
    vector <pair<int,int> > q;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
      //  cout<<x<<' '<<y<<endl;
        q.push_back({x,y});
    }
    int dp[100005],cnt=0;
    int n=s.size();
    dp[0]=0;
    int j=1;
    while(j<n){
        if(s[j]==s[j-1])
            cnt++;
        dp[j]=cnt;
        j++;
    }
    //cout<<dp[]
    for(int i=0;i<m;i++){
            int f=q[i].first;
            int l=q[i].second;
            int ans=dp[l-1]-dp[f-1];
            cout<<ans<<endl;
    }
    return 0;
}
