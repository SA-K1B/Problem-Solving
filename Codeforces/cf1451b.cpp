#include<bits/stdc++.h>
using namespace std;
int main()
{
   freopen("i.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q,f,j;
        scanf("%d%d",&n,&q);
        getchar();
        string s1;
        cin>>s1;
        for(int i=1;i<=q;i++){
            int x,y;
            cin>>x>>y;
            if(x==1&&y==n){
                cout<<"NO"<<endl;
            }
            else{
                char fr=s1[x-1];
                 j=0;
                 f=0;
                while(j<(x-1)){
                    if(s1[j]==fr){
                        cout<<"YES"<<endl;
                        f=1;
                        break;
                    }
                    j++;
                }
                if(f==0){
                    j=y;
                    char la=s1[y-1];
                    while(j<n){
                        if(s1[j]==la){
                        cout<<"YES"<<endl;
                        f=1;
                        break;
                     }
                     j++;
                  }
                  if(f==0)
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
