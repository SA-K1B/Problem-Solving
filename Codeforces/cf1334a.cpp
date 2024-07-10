#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        vector <pair<int,int> > v;
        int n,x,y;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            v.push_back({x,y});
        }
        int pmx=0,cmx=0,f=0;
        for(int i=0;i<n;i++){
            int p=v[i].first;
            int c=v[i].second;
            if(c>p){
                f=1;
                break;
            }
            else{
                if(p<pmx||c<cmx||((p-pmx)<(c-cmx))){
                    f=1;
                    break;
                }
                else{
                    pmx=p;
                    cmx=c;
                }
            }
        }
        if(f)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
