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
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int t,f=0;
    scanf("%d\n",&t);
    while(t--){
            if(f)
            cout<<"\n";
         f=1;
        int n,ra=0,wa=0;
        //cout<<endl;
        scanf("%d\n",&n);
      //  cout<<n<<endl;
        for(int i=1;i<=n;i++)
            par[i]=i;
        string s1;
        char ch;
        int a,b;
        while(1){
        if(!getline(cin,s1)||s1.empty())
           break;
                //if(s1[0]==' ')
                   //break;
           // cout<<s1<<endl;
            stringstream g(s1);
            g>>ch;
            g>>a;
            g>>b;
        //cout<<ch<<a<<b<<endl;;
            if(ch=='q'){
                //cout<<"r"<<endl;
              if(findpar(a)==findpar(b)){
                ra++;
            }
            else wa++;
        }
            else{
               int pa=findpar(a);
               int pb=findpar(b);
               if(pa!=pb){
                unite(pa,pb);
               }
            }
        }
        cout<<ra<<","<<wa<<endl;
    }
    return 0;
}
