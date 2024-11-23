#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t){
		int n,m,L;
		cin>>n>>m>>L;
		vector <int> f(m+1),s(m+1);
		vector<pair<int,int>> h;
  		for(int i=0;i<n;i++){
  			int x,y;
  			cin>>x>>y;
  			h.push_back({x,y});
  		}
  		for(int i=0;i<m;i++){
  			int x,y;
  			cin>>f[i]>>s[i];
  		}
  		priority_queue<int> pq;
  		int pow=1;
  		int i=0;
  		int res=0;
  		int flag=0;
  		for(auto it: h){
  			while(i<m){
  				// cout<<f[i]<<endl;
  				if(it.first<f[i])
  					break;
  				pq.push(s[i]);
  				// cout<<s[i]<<endl;
  				i++;
  			}
  			// cout<<pq.top()<<endl;
  			int d = it.second-it.first+2;
  			d-=pow;
  			while(d>0 && !pq.empty()){
  				d-=pq.top();
  				pow+=pq.top();
  				pq.pop();
  				res++;
  			}
  			if(d>0){
  				cout<<"-1"<<endl;
  				flag=1;
  				break;
  			}
  		 }
  		 if(flag==0){
  		 	cout<<res<<endl;
  		 }
		t--;
	}
	return 0;
}