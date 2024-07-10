#include<bits/stdc++.h>
using namespace std;
int convert(int x){
   int ans=0,mul=1;
   while(x>0){
    int rem=x%2;
    ans+=rem*mul;
    x/=2;
    mul*=10;
   }
    return ans;
}
int main()
{
    freopen("i.txt","r",stdin);
    int t,cnt=0;
    cin>>t;
    while(t--){
    int a[5],ba[5],f=0;
    scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%d.%d.%d.%d",&ba[0],&ba[1],&ba[2],&ba[3]);
    for(int i=0;i<4;i++){
        int y=convert(a[i]);
        if(y!=ba[i]){
            f=1;
            break;
        }
    }
    if(f)
        printf("Case %d: No\n",++cnt);
    else  printf("Case %d: Yes\n",++cnt);
    }
    return 0;
}
