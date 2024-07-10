#include<bits/stdc++.h>
#define ll long long
long long f( ll A[], int n ) { // n = size of A
    long long sum = 0;
    for( int i = 0; i < n; i++ )
       sum+=(n-1-i*2)*A[i];
    return sum;
}
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    int t,l,cnt=0,n,q;
    cin>>t;
    while(t--){
        printf("Case %d:\n",++cnt);
     //   vector <int> r;
        ll A[100005];
        cin>>n>>q;
        for(int i=0;i<n;i++)
          cin>>A[i];
        ll x,v;
        ll s=f(A,n);
        for(int j=0;j<q;j++){
           cin>>x;
           if(x==1){
            cout<<s<<endl;
           // r.push_back(s);
           }
           else{
            cin>>l>>v;
            ll x1=n-1-l*2;
            s+=x1*(v-A[l]);
            A[l]=v;
           }
        }
    }
    return 0;
}
