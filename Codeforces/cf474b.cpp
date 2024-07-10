#include<bits/stdc++.h>
using namespace std;
int bin(int *ar,int e,int k){
    int s=0,m,f;
    while(s<=e){
     //cout<<s<<' '<<e<<endl;
     if(s==e){
            //cout<<ar[s]<<endl;
        if(ar[s]==k){
            f=s;
            break;
        }
        else if(k>ar[s]){
                f=s+1;
                break;
        }
        else{
            f=s;
            break;
        }
     }
     else{
         m=(s+e)/2;
        if(k>ar[m]){
            s=m+1;
        }
        else if(k<ar[m]){
        if(m==0){
            f=s;
            break;
        }
            e=m-1;
        }
        else{
            if(k==ar[m]){
                f=m;
                break;
            }
         }
       }
    }
    return f;
}
int main()
{
    //freopen("i.txt","r",stdin);
    int n,a[100005],c[100005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m,b[100005];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int j=0;
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        c[j]=s;
        j++;
    }
    /*for(int i=0;i<j;i++)
        cout<<c[i]<<' ';*/
        for(int l=0;l<m;l++){
            int t=bin(c,j-1,b[l])+1;
            cout<<t<<endl;
        }
        return 0;
}
 
