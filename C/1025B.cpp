#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, x, y;
	cin >> n;
	cin >> x >> y;
	long long gcd = __gcd(x*y, x*y);
	for(int i = 1;i < n;i++){
		cin >> x >> y;
		gcd = __gcd(x*y, gcd);
		// cout << x*y << " " << gcd << endl;
		if(gcd == 1){
			cout << -1 << endl;
			return 0;
		}
	}
	cout << gcd << endl;
}