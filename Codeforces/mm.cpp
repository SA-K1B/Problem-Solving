/*
	ARNAB SINGHA
*/
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define for0(i,n)    for(i=0;i<n;i++)
#define for1(i,n)    for(i=1;i<=n;i++)
#define forc(i,l,r)  for(i=l;i<=r;i++)
#define forr0(i,n)   for(i=n-1;i>=0;i--)
#define forr1(i,n)   for(i=n;i>=1;i--)

#define pb    push_back
#define mp    make_pair
#define ff    first
#define ss    second

#define all(x)  (x).begin(), (x).end()//fortrav
#define rall(x) (x).rbegin(), (x).rend()//revtrav

#define sz(a)    (a).size()
#define SET(a)    memset(a, -1,sizeof a)

#define cyes  cout<<"Yes"<<endl
#define cno   cout<<"No"<<endl
#define nl    cout<<endl

//
typedef   vector<int>    vi;
typedef   vector<vi>     vvi;
typedef   pair<int, int> ii;
typedef   vector<ii>     vii;
typedef   long long int  ll;
typedef   vector<ll>     vll;
typedef   vector<vll>    vvll;
typedef   map<int,int>   mii;
typedef   map<ll,ll>     mll;
typedef   map<int,string>mis;
typedef   map<char,int>  mci;

//constant
#define Pi    3.141592653589793
#define mod   1000000007
#define N     200000005
#define INF   2147483647
//
#define fastio 		ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//ll dp[101][101];
ll fact[16] = {0};
ll func(ll n) {
   if(n == 1)return 1;
   if(fact[n])return fact[n];
   else return fact[n] = (func(n - 1)*n);
}

//main code:
void solve(){
	ll i,j,n,m,k,p,q,x,y,z;
	cin >> n;
	ll ans = INF;
	for0(i,(1 << 15)){ // bitmasking technique
		ll sum = 0;
		ll cnt = __builtin_popcountll(i);
		for0(j,14){
			if((i & (1 << j)) != 0){
				sum += fact[j+1];
			}
		}
		if(sum <= n){
			cnt +=__builtin_popcountll(n - sum);
			ans = min(ans, cnt);
		}
	}
	cout << ans << endl;
	return;
}

int main() {

	fastio;
	ll p = func(15);
	int tst, t = 1;
	cin >> t;
	 for(tst = 1; tst <= t; tst++){
		// cout<<"Case "<<tst<<": ";
		solve();
	}
	return 0;
}
