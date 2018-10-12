#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n, L, a;
	cin >> n >> L >> a;
	int end = 0;
	// cout << L << endl;
	int x, y, count = 0;
	for(int i = 0;i < n;++i){
		cin >> x >> y;
		count += (x-end)/a;
		// cout << x-end << endl;
		end = y+x;
	}
	// cout << L-end << endl;
	count += (L-end)/a;
	cout << count << endl;
}