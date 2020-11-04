#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		long long a, b, k;
		cin >> a >> b >> k;
		long long pos = 0;

		if(k % 2 == 0){
			pos = (a - b) * k / 2;
		}
		if(k % 2 == 1){
			pos =  (a-b)*(k/2);
			pos += a;
		}

		cout << pos << endl;

	}

	return 0;
}
