#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b){
  if(a>=b)
    return true;
  else return false;
}
int main()
{
    freopen("i.txt","r",stdin);
    int t,b=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1="";
        int x=n;
        while(x>0){
            int rem=x%2;
            s1+='0'+rem;
            x/=2;
        }
        //cout<<s1<<endl;
        s1+='0';
        int sz1=s1.size();
        int j=0;
        while(j<sz1-1){
            if(s1[j]=='1'&&s1[j+1]=='0'){
               s1[j]='0';
               s1[j+1]='1';
                break;
            }
            j++;
        }
        sort(s1.begin(),s1.begin()+(j+1),cmp);
        reverse(s1.begin(),s1.end());
       // cout<<s1[0]<<endl;
       //long long bin;
        //stringstream g(s1);
        //g>>bin;
        //cout<<bin<<endl;
        int k=0,lastz=-1;
        while(k<sz1){
            if(s1[k]=='0')
                lastz=k;
            else break;
            k++;
        }
         //cout<<n<<endl;
         j=0;
         int i=sz1-1,ans=0;
         //cout<<s1[n-1]<<endl;
        while(i>=lastz+1){
            int rem=s1[i]-'0';
            ans+=rem*pow(2,j);
            i--;
            j++;
        }
        printf("Case %d: %d\n",b++,ans);
    }
    return 0;
}
