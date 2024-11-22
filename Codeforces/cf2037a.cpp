#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		vector <int> v(n+1);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int res=0;
		int flag[n] = {0};
		// cout<<"dfd"<<flag[0]<<endl;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(v[i]==v[j] && !flag[i] and !flag[j]){
					res++;
					flag[i]=1;
					flag[j]=1;
				}
			}
		}
		cout<<res<<endl;
		t--;
	}
}