#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n;
	unsigned long long x, y, a, b;
	cin >> n;
	while(n--){
		cin >> x >> y;
		a = x+y;
		b = x-y;
		if(b > 1 || a % 2 == 0){
			cout << "NO\n";
			continue;
		}
		bool flag = true;
		for(int i = 3;i*i <= a;i += 2){
			if(a % i == 0){
				cout << "NO\n";
				flag = false;
				break;
			}
		}
		if(flag) cout << "YES\n";
	}
}