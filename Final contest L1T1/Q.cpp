#include<bits/stdc++.h>
using namespace std;
int bin(int a[],int n,int s){
     int low=0;
     int high=n-1;
     while(low<=high){
        int mid=(low+high)/2;
        if(low==high)
            return low;
        if(a[mid]==s)
            return mid;
       else if(a[mid]<s)
           low=mid+1;
       else high=mid-1;
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int n,i,j,t=0;
    while(cin>>n){
    int a[n];
    for( i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
    int k;
    cin>>k;
  //  int x=bin(a,n,k/2);
   // cout<<x<<endl;
    int x=(n-1)/2;
    if(a[x]==k/2){
        if(x==0){
            printf("Peter should buy books whose prices are %d and %d.\n",a[x],a[x+1]);
            continue;
        }
    }
    if(a[x]<k/2){
     i=x+1;
     j=i-1;
    }
    else{
       i=x;
       j=i-1;
    }
    while(1){
        if(a[i]+a[j]==k){
            printf("Peter should buy books whose prices are %d and %d.\n",a[j],a[i]);
            break;
        }
        else if(a[i]+a[j]<k){
            i++;
            j=i-1;
        }
        else{
            j--;
        }
    }
        cout<<endl;
}
    return 0;
}
