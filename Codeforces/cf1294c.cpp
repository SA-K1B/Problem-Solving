#include<bits/stdc++.h>
using namespace std;
set <int> st;
set <int>:: iterator it;
vector <int> v;
int primefact(int n){
     while(n%2==0){
        st.insert(2);
        v.push_back(2);
        n/=2;
     }
    // cout<<n<<endl;
     for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            st.insert(i);
            v.push_back(i);
            n/=i;
     }
   }
    if(n>2){
        st.insert(n);
        v.push_back(n);
    }
}
int main()
{
   // freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        primefact(n);
        int x=st.size();
        int y=v.size();
        if(x>2){
            cout<<"YES"<<endl;
            int m=1,cnt=0;
            for(it=st.begin();cnt<2;it++){
                cout<<*it<<' ';
                cnt++;
                m=m*(*it);
            }
            cout<<n/m<<endl;
    }
        else if(x==2){
            if(y>=4){
            cout<<"YES"<<endl;
            int m=1,cnt=0;
            for(it=st.begin();it!=st.end();it++){
                cout<<*it<<' ';
                 m=m*(*it);
            }
            cout<<n/m<<endl;
        }
            else cout<<"NO"<<endl;
    }
        else{
            if(y>=6){
                cout<<"YES"<<endl;
                cout<<"2"<<' '<<"4"<<' '<<n/8<<endl;
            }
            else cout<<"NO"<<endl;
}
        st.clear();
        v.clear();
       // cout<<x<<' '<<y<<endl;
}
    return 0;
}
