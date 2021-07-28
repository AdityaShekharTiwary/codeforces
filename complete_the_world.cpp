#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	vector<int> ch(26, 0);
	int cnt = 0;
	int st = -1;
	int n = s.size();
	if (n < 26)
		cout << -1 << endl;
	else
	{
		for (int i = 0; i < 26; i++)
		{
			if (s[i] == '?')
				cnt++;
			else
				ch[s[i] - 'A']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (s[i] != '?' && ch[s[i] - 'A'] == 1)
				cnt++;
		}
		if (cnt == 26)
		{
			vector<char> temp;
			int k = 0;
			string ans;
			for (int i = 0; i < 26; i++)
			{
				if (ch[i] == 0)
					temp.push_back(char('A' + i));
			}
			for (int i = 0; i < 26; i++)
			{
				if (s[i] == '?')
					ans = ans + temp[k++];
				else
					ans = ans + s[i];
			}
			for (int i = 26; i < n; i++)
			{
				if (s[i] == '?')
					ans = ans + 'A';
				else
					ans = ans + s[i];
			}
			cout << ans << endl;
		}
		else
		{
			for (int i = 26; i < n; i++)
			{
				if (s[i - 26] == '?')
					cnt--;
				else if (ch[s[i - 26] - 'A'] == 1)
				{
					ch[s[i - 26] - 'A']--;
					cnt--;
				}
				else if (ch[s[i - 26] - 'A'] == 2)
				{
					ch[s[i - 26] - 'A']--;
					cnt++;
				}
				else
					ch[s[i - 26] - 'A']--;
				if (s[i] == '?')
					cnt++;
				else
				{
					ch[s[i] - 'A']++;
					if (ch[s[i] - 'A'] == 1)
						cnt++;
					if (ch[s[i] - 'A'] == 2)
						cnt--;
				}
				if (cnt == 26)
				{
					st = i - 26 + 1;
					break;
				}
			}
			vector<char> temp;
			if (st != -1)
			{
				int k = 0;
				for (int i = 0; i < 26; i++)
				{
					if (ch[i] == 0)
						temp.push_back(char('A' + i));
				}
				string ans;
				for (int i = 0; i < st; i++)
				{
					if (s[i] == '?')
						ans = ans + 'A';
					else
						ans = ans + s[i];
				}
				for (int i = st; i < (st + 26); i++)
				{
					if (s[i] == '?')
						ans = ans + temp[k++];
					else
						ans = ans + s[i];
				}
				for (int i = st + 26; i < n; i++)
				{
					if (s[i] == '?')
						ans = ans + 'A';
					else
						ans = ans + s[i];
				}
				cout << ans << endl;
			}
			else
				cout << -1 << endl;
		}
	}
}