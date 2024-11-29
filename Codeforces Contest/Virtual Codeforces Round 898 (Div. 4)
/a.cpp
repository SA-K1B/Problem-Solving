#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t){
		string s;
		cin>>s;
		int cnt=0;
		if(s[0] != 'a')
			cnt++;
		if(s[1] != 'b')
			cnt++;
		if(s[2] != 'c')
			cnt++;
		if(cnt<=2)
			cout<<"yes"<<endl;
		else cout<<"No"<<endl;
		t--;
	}
	return 0;
}