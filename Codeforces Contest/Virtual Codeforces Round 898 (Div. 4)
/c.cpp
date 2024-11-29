#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t){
		int cnt=1;
		int res = 0;
		while(cnt<=10){
			string s;
			cin>>s;
			for(int i=0;i<s.size();i++){
				int j = i+1;
				if(s[i]=='X'){
					cout<<i<<endl;
					if(i<5)
						res+=(i+1);
					else
						res+=(10-i);
				}
			}
		}
		cout<<res<<endl;
		t--;
	}
	return 0;
}