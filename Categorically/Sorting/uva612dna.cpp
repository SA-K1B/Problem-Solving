#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
map <int,string> mp1;
vector <pair<int,int> > v;
bool srt(pair<int,int> x,pair<int,int> y){
     if(x.second<y.second) return true;
     else if(x.second==y.second) return (x.first<y.first);
     else return false;
}
int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    string s1;
    int m,t=0;
    cin>>m;
    while(m--){
            if(t)
            cout<<"\n";
        t=1;
        int r,c;
        cin>>c>>r;
        for(int l=1;l<=r;l++){
                //cout<<c<<endl;
            int cnt=0;
            cin>>s1;
           // cout<<m<<r<<c<<s1;
            mp[s1]=l;
            mp1[l]=s1;
            for(int i=0;i<c-1;i++){
                for(int j=i+1;j<c;j++){
                    if(s1[i]>s1[j]){
//                        cout<<i<<' '<<j<<endl;
                        cnt++;
                    }
                }
            }
           // cout<<l<<' '<<cnt<<endl;
            v.push_back({l,cnt});
          //  cout<<l<<' '<<cnt<<endl;
        }
        sort(v.begin(),v.end(),srt);
        //cout<<v.size()<<endl;
      /*  for(int i=0;i<v.size();i++){
                cout<<v[i].first<<' '<<v[i].second<<endl;
               }*/
        for(int i=0;i<v.size();i++)
            cout<<mp1[v[i].first]<<endl;
            mp.clear();
            mp1.clear();
            v.clear();
    }
    return 0;
}
