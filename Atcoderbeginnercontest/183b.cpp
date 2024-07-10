#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define db double
#define mp make_pair
#define Max 10000000000000000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    db x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    printf("%.6lf\n",(((-y1*(x1-x2))/(y1+y2))+x1));
    return 0;
}

