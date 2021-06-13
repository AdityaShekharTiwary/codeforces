#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<long long> nums;
		nums.push_back(0);
		for (int i = 0; i < n; i++) {
			long long x; cin >> x;
			nums.push_back(x);
		}
		nums.push_back(0);

		long long value = 0;
		for (int i = 0; i <= n; i++) {
			value += abs(nums[i] - nums[i + 1]);
		}

		long long counter = 0, res = 0;
		for (int i = 1; i <= n; i++) {
			counter = min((nums[i] - nums[i - 1]), (nums[i] - nums[i + 1]));
			if (counter > 0) res += counter;
		}
		cout << value - res << endl;

	}

	return 0;
}
