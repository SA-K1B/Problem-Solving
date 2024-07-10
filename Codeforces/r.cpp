#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("i.txt","r",stdin);
  //  freopen("o.txt","w",stdout);
	int t;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 9; ++i) {
			string s;
			cin >> s;
			for (auto &c : s) if (c == '2') c = '1';
			cout << s << endl;
		}
	}

	return 0;
}
