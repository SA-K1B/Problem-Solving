#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    vector<int> f,l;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==2){
        cout<<"0"<<endl;
        return 0;
    }

    sort(a,a+n);
    int frst=a[0];
    for(int i=1;i<n;i++){
        f.push_back(a[i]-frst);
    }
    int lst=a[n-1];
    for(int i=n-2;i>=0;i--){
        l.push_back(lst-a[i]);
    }
    int x=f[n-3];
    int y=l[n-3];
    cout<<min(x,y)<<endl;
    return 0;
}
