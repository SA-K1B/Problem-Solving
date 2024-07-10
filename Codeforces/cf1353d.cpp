#include<bits/stdc++.h>
#define ll long long int
#define db double
#define pb push_back
#define mp make_pair
#define Max 10000000000000000
#define Min -10000000000000000
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
ll dx[]={1,1,0,-1,-1,-1,0,1};
ll dy[]={0,1,1,1,0,-1,-1,-1};
using namespace std;
struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first + 1;
		int lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};
int main()
{
    freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,res[200005];
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set < pair <ll, ll>, cmp > st;
        st.insert({0,n-1});
        for(ll i=1;i<=n;i++){
         pair<ll, ll> cur;
         cur = *st.begin();
         st.erase(cur);
         ll mid=(cur.first+cur.second)/2;
         res[mid]=i;
         if(cur.first<mid)
            st.insert({cur.first,mid-1});
         if(cur.second>mid)
            st.insert({mid+1,cur.second});
      }
      for(ll i=0;i<n;i++)
        cout<<res[i]<<' ';
      cout<<endl;
    }
    return 0;
}

