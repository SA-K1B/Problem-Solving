#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min a-10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
string num1="";
string num2="";
void findmn(ll n1,ll s1){
    n1=n1-1;
    s1=s1-1;
    ll c=0;
    while(c<n1){
        if(s1>9){
         num1+=9+'0';
         s1-=9;
        }
        else {
        num1+=s1+'0';
        s1=0;
        }
        c++;
    }
    num1+=(s1+1)+'0';
}
void findmx(ll n1,ll s1){
    ll c=0;
    while(c<n1){
        if(s1>9){
         num2+=9+'0';
         s1-=9;
        }
        else {
        num2+=s1+'0';
        s1=0;
        }
        c++;
    }
}
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    if((n!=1&&s==0)||(s>n*9)){
        cout<<"-1"<<' '<<"-1"<<endl;
        return 0;
    }
    findmn(n,s);
    reverse(num1.begin(),num1.end());
    cout<<num1<<' ';
    findmx(n,s);
    cout<<num2<<endl;
    return 0;
}

