#include<bits/stdc++.h>
using namespace std;
char c[31][31];
int n,vis[31][31];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
struct st{
     int p;
     int q;
     int cnt;
};
 st var1;
void funst(int a,int b,int c){
   var1.p=a;
   var1.q=b;
   var1.cnt=c;
}
bool isvalid(int d,int e){
    if((d<1||d>n||e<1||e>n)||(vis[d][e]==1)||(c[d][e]=='T'))
        return false;
    else return true;
}
void fun(int x1,int y1,int x2,int y2){
    queue <st> q;
    funst(x1,y1,0);
    q.push(var1);
    while(!q.empty()){
        st cur=q.front();
        q.pop();
        vis[cur.p][cur.q]=1;
        if(cur.p==x2&&cur.q==y2){
            cout<<cur.cnt<<endl;
            return;
        }
        for(int k=0;k<4;k++){
            if(isvalid(cur.p+dx[k],cur.q+dy[k])){
                funst(cur.p+dx[k],cur.q+dy[k],cur.cnt+1);
                q.push(var1);
            }
        }
    }
}
int main()
{
    //freopen("i.txt","r",stdin);
    int i,j,x1,y1,x2,y2;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>c[i][j];
            if(c[i][j]=='S'){
                x1=i;
                y1=j;
            }
            else if(c[i][j]=='E'){
                x2=i;
                y2=j;
            }
        }
    }
    //cout<<x1<<y1<<x2<<y2<<endl;
    fun(x1,y1,x2,y2);
    return 0;
}
