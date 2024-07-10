#include<bits/stdc++.h>
using namespace std;
string s[55];
string tmp;
main()
{
    freopen("i.txt","r",stdin);
    int n,ans=1e9,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            tmp=s[j]+s[j];
            if(tmp.find(s[i])=='\0')
            {
                cout<<"-1"<<endl;
                return 0;
            }
            else cnt+=tmp.find(s[i]);
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
