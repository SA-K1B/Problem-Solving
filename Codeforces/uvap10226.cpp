#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("i.txt","r",stdin);
   //freopen("o.txt","w",stdout);
    map <string,int> mp;
    map <string,int>::iterator it;
    string s1;
    int t;
    cin>>t;
    int a=t;
    getchar();
    getchar();
    while(t--){
        if(t!=a-1)
            cout<<endl;;
       int cnt=0;
    while(getline(cin,s1)){
        if(s1.size()==0)
        break;
        mp[s1]++;
        //it=mp.begin();
        //cout<<s1<<endl;
        cnt++;
     }
    for(it=mp.begin();it!=mp.end();it++){
        string s2=it->first;
       // cout<<s2<<endl;
        int x=it->second;
        float total=(float)x/cnt*100;
        cout<<s2<<' ';
        printf("%.4f\n",total);
     }
     mp.clear();
   }
   return 0;

}
