#include<bits/stdc++.h>
using namespace std;
int par[100000];
int findpar(int x){
    if(par[x]==x)
        return x;
    return par[x]=findpar(par[x]);
}
void unite(int d,int e){
    par[e]=d;
}
int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t,f=0;
    scanf("%d\n",&t);
    while(t--){
        if(f)
            cout<<endl;
        f=1;
        char lc[2];
        gets(lc);
        int alc=lc[0]-'A';
       // cout<<alc<<endl;
        for(int i=0;i<=alc;i++){
            par[i]=i;
        }
        char s1[5];
        while(gets(s1)){
                //cout<<"f"<<endl;
            if(s1[0]=='\0')
            {
                //cout<<"f"<<endl;
                break;
            }
            int fc=s1[0]-'A';
            int ec=s1[1]-'A';
            int pfc=findpar(fc);
            int pec=findpar(ec);
            if(pfc!=pec){
                unite(pfc,pec);
            }
        }
        int cnt=0;
        int p0=findpar(0);
        for(int j=1;j<=alc;j++){
         int pj=findpar(j);
            if(p0!=pj)
              cnt++;
              par[pj]=p0;
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
