#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int n,int x){
    int low=0;
    int high=n-1;
    int  mid=low+((high-low)/2);
    while(low<=high){
        //cout<<"t"<<endl;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x)
            low=mid+1;
        else if(a[mid]>x)
            high=mid-1;
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    int n;
    cin>>n;
    int a[n];
    cout<<n<<endl;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int q;
    cin>>q;
    int qu[q];
    for(int j=0;j<q;j++){
        cin>>qu[j];
    }
     for(int j=0;j<q;j++){
        int m=bs(a,n,qu[j]);
        if(m-1>=0)
            cout<<a[m-1];
        else cout<<'X';
        cout<<' ';
        if(m+1<n)
            cout<<a[m+1]<<endl;
        else cout<<'X'<<endl;
    }


}
