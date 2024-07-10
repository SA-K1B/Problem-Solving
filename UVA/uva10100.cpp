#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;

int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    int cnt=1;
    while(getline(cin,s1)){
             getline(cin,s2);
               // cout<<s1<<' '<<s2<<endl;
        if(s2.size()==0)
        printf("%2d. Blank!\n",cnt++);
        else{
            int s=s1.size();
            if(ispunct(s1[s-1]))
               printf("%2d. Length of longest match: 1\n",cnt++);
            else printf("%2d. Length of longest match: 2\n",cnt++);
        }
    }
    return 0;
}
