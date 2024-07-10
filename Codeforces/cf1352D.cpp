#include<bits/stdc++.h>
#define ll long long
#define INF=1000000000
using namespace std;
int main()
{
   // freopen("i.txt","r",stdin);
    int t,n;
    deque <int> dq;
    cin>>t;
  //  cout<<t<<endl;
    while(t--){
    deque <int> dq;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        //cout<<x<<endl;
        dq.push_back(x);
    }
    int ta=0,tb=0,pa=dq.front(),pb,turn=2,moves=1;
    ta+=pa;
  //  cout<<pa<<endl;
    dq.pop_front();
    while(dq.size()>0){
        if(turn==2){
         pb=0;
         while(pb<=pa&&dq.size()>0){
            pb+=dq.back();
            dq.pop_back();
         }
         tb+=pb;
         moves++;
         turn=1;
        // cout<<tb<<endl;
      }
      else{
        pa=0;
         while(pa<=pb&&dq.size()>0){
            pa+=dq.front();
            dq.pop_front();
         }
         ta+=pa;
         moves++;
         turn=2;
        //cout<<ta<<endl;

      }
    }
    cout<<moves<<' '<<ta<<' '<<tb<<endl;
  }
  return 0;
}

