#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t){
		int k;
		cin>>k;
		vector <int> v(k+1);
		map<int,int> mp;
		for(int i=0;i<k;i++){
			cin>>v[i];
			mp[v[i]]++;
		}
		int l=k-2;
		for(int i=0;i<k;i++){
		   	if(l%v[i]==0){
		   		// cout<<v[i]<<' ';
		   		mp[v[i]]--;
		   		if(mp[l/v[i]]){
		   			cout<<v[i]<<" "<<l/v[i]<<endl;
		   			break;
		   		}
		   	  }
		   	  mp[v[i]]++;
			}
		t--;
	}
}