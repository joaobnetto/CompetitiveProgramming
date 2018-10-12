#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long long int w, h, a, b;
	cin >> w >> h >> a >> b;
	long long int x = __gcd(a,b);
	a/= x; b/= x;
	cout << min(w/a, h/b) << endl;
}