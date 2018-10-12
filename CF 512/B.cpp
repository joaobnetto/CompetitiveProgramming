#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d;
	cin >> n >> d;
	int m;
	cin >> m;
	int x, y;
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		if(x + y >= d && x-y <= d && x-y >= -d && x+y <= 2*n-d){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}