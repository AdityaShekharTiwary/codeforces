#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int L,R,U,D;
		L = R = U = D = 0;
		string s;
		cin >> s;
		int l = s.size();
		for (int i = 0; i < l; i++)
		{
			if (s[i] == 'L')L++;
			if (s[i] == 'R')R++;
			if (s[i] == 'U')U++;
			if (s[i] == 'D')D++;
		}
		int x = min(L, R);
		int y = min(U, D);
		if (x && y)
		{
			cout << 2 * x + 2 * y << endl;
			for (int i = 0; i < x; i++)cout << "L";
			for (int i = 0; i < y; i++)cout << "U";
			for (int i = 0; i < x; i++)cout << "R";
			for (int i = 0; i < y; i++)cout << "D";
			cout << endl;
		}
		else
		{
			if (x)
				cout << 2 << endl << "LR" << endl;
			else if (y)
				cout << 2 << endl << "UD" << endl;
			else cout << 0 << endl;
		}
	}
	return 0;
}
