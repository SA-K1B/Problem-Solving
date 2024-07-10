// They Plan, and Allah Plans...
// Indeed Allah is the Best of Planners.

#include <bits/stdc++.h>
using namespace std;

/*======================================= Macro Start====================================================*/
#define fastio                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#define precise         \
	cout.precision(10); \
	cout << fixed;
#define all(x) x.begin(), x.end()
#define endl "\n"
#define ll long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
const double PI = acos(-1);
const ll infinity = (1000000000 + 11);

void solve()
{
	string str;
	cin >> str;
	int ax = 0, ay = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'L')
			ax--;
		else if (str[i] == 'R')
			ax++;
		else if (str[i] == 'U')
			ay++;
		else
			ay--;
		int x = 0, y = 0;
		for (int j = 0; j < str.size(); j++)
		{
			int a = x, b = y;
			if (str[j] == 'L')
				a--;
			else if (str[j] == 'R')
				a++;
			else if (str[j] == 'U')
				b++;
			else
				b--;
			if (ax == a && ay == b)
			{
				continue;
			}
			x = a;
			y = b;
		}
		if (x == 0 && y == 0)
		{
			cout << ax << " " << ay << endl;
			return;
		}
	}
	cout << "0 0" << endl;
}
void Task()
{
	int test;
	cin >> test;
	for (int i = 1; i <= test; i++)
	{
		//cout << "Case " << i << ": ";
		solve();
	}
}
int main()
{
	Task();
	return 0;
}
