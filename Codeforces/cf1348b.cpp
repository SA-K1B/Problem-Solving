#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
            vector <int> v;
        set <int> st;
        set <int>:: iterator it;
        int n,k,a[101];
        cin>>n>>k;
       // cout<<n<<' '<<k<<endl;
        int r1=n;
        for(int i=0;i<n;i++){
            cin>>a[i];
           st.insert(a[i]);
        }
        int sz=st.size();
        if(sz>k){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            if(sz==k){
                cout<<k*n<<endl;
                while(r1>0){
                    for(it=st.begin();it!=st.end();it++)
               //       v.push_back(*it);
                        cout<<*it<<' ';
                        r1--;
               }
            }
            else{
                    cout<<n*k<<endl;
                    while(r1>0){
                    for(it=st.begin();it!=st.end();it++)
                        cout<<*it<<' ';
                      //  v.push_back(*it);
                      for(int j=1;j<=k-sz;j++)
                        //v.push_back(1);
                        cout<<"1"<<' ';
                        r1--;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
