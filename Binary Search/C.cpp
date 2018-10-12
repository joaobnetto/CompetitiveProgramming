#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; 
	cin >> n;
	int x;
	vector < int > v;
	v.push_back(0);
	for(int i = 1;i <= n;i++){
		cin >> x;
		v.push_back(v[i-1]+x);
		// cout << v[i] << endl;
	}
	int m;
	cin >> m;
	while(m--){
		cin >> x;
		auto k = lower_bound(v.begin(), v.end(), x);
		cout << k-v.begin() << endl;
	}
}