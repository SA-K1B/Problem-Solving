#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		long long int mn = 100;
		long long int prod = 1;
		int z = 0;
		vector <long long int> v(n+1);
  		for(int i=0;i<n;i++){
  			cin>>v[i];
  			if(v[i]==0){
  				z++;
  				continue;
  			}
  			mn = min(v[i],mn);
  			prod*=v[i];
  		}
  		if(z==1){
  			cout<<prod<<endl;
  		}
  		else if(z>1){
  			cout<<"0"<<endl;
  		}
  		else{
  		prod/=mn;
  		mn++;
  		prod*=mn;
  		cout<<prod<<endl;
  		}
		t--;
	}
	return 0;
}