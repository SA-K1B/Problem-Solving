#include <bits/stdc++.h>//Carefully Crafted by hetp111
using namespace std;
#define int long long
#define double long double
#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class A, class B> ostream& operator<<(ostream& out, const pair<A, B> &a){
    return out<<"("<<a.first<<","<<a.second<<")";}
template<class A> ostream& operator<<(ostream& out, const vector<A> &a){
	out<<"";for(auto it=a.begin();it!=a.end();it++){if(it!=a.begin())out<<" ";out<<*it;}out<<"";
	return out;}
template<class A, class B> istream& operator>>(istream& in, pair<A,B> &a){in>>a.first>>a.second;return in;}
template<class A> istream& operator>>(istream& in, vector<A> &a){for(A &i:a)in>>i;return in;}

int f(int n){
    if(n==4)return 0;
    if(n==8)return 1;
    if(n==15)return 2;
    if(n==16)return 3;
    if(n==23)return 4;
    if(n==42)return 5;
}

signed main(){
    FASTER;
    int q=1;
    while(q--){
        vi v(6,0);
        int n;cin>>n;
        //vi in(n);cin>>in;
        int ans=0;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            if(v[f(tmp)-1]>v[f(tmp)]){
                v[f(tmp)]++;
            }else{
                ans++;
            }
        }
        int asd=0;
        int ttt=v[5];
        for(int i:v){
            asd+=i-ttt;
        }
        cout<<(ans+asd)<<"\n";
    }
}
