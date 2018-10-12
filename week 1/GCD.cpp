#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t, x, n;
	cin >> t;
	while(t--){
		cin >> n;
		vector < int > v;
		for(int i = 0;i < n;i++){
			cin >> x;
			v.push_back(x);
		}
		if(v.size() == 1 && v[0] == 1){
			cout << "YES\n";
			continue;
		}
		else if(v.size() == 1){
			cout << "NO\n";
			continue;
		}
		bool tr = false;
		x = __gcd(v[0], v[1]);
		if(x == 1) tr = true;
		for(int i = 2;i < n;i++){
			x = __gcd(v[i], x);
			if(x == 1){
				tr = true;
			}
		}
		if(tr) cout << "YES\n";
		else cout << "NO\n";
	}
}