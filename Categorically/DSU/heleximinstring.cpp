#include<bits/stdc++.h>
using namespace std;
map <char,char> par;
char findpar(char x){
    if(par[x]==0)
        return x;
    return par[x]=findpar(par[x]);
}
void unite(char d,char e){
     if(d<=e)
        par[e]=d;
     else par[d]=e;
}
int main()
{
    freopen("i.txt","r",stdin);
    string a,b,c;
    cin>>a>>b>>c;
    int SIZE=a.size();
    int j=0;
    while(j<SIZE){
        char c1=a[j];
        char c2=b[j];
        char pc1=findpar(c1);
        char pc2=findpar(c2);
        if(pc1!=pc2){
            unite(pc1,pc2);
        }
        j++;
    }
    j=0;
    int s=c.size();
    while(j<s){
        char q=c[j];
        cout<<par[q];
        j++;
    }
    return 0;
    //cout<<findpar('x')<<' '<<findpar('d')<<endl;
}
