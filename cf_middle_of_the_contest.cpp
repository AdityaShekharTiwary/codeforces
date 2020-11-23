#include <iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int H1, H2, M1, M2;
	char C;
	cin >> H1 >> C >> M1;
	cin >> H2 >> C >> M2;
	H1 = H1 + H2;
	M1 = M1 + M2;
	if (M1 >= 60)
	{
		M1 -= 60;
		H1 += 1;
	}
	if (H1 % 2 != 0)
	{
		M1 += 60;
		H1 -= 1;
	}
	H1 /= 2, M1 /= 2;
	int H = H1, M = M1, S = 0, S1 = 0;
	while (H != 0)
	{
		S++;
		H /= 10;
	}
	while (M != 0)
	{
		S1++;
		M /= 10;
	}
	if (S == 1 || S == 0)
		cout << 0 << H1 << C;
	else
		cout << H1 << C;
	if (S1 == 1 || S1 == 0)
		cout << 0 << M1;
	else
		cout << M1;
	return 0;
}
