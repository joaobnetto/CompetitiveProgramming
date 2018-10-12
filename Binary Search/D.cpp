#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector < int > v;
	int x;
	for(int i = 0;i < n;i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int q;
	cin >> q;
	while(q--){
		cin >> x;
		auto k = upper_bound(v.begin(), v.end(), x);
		if(v.begin() == k && *k != x) cout << 0 << endl;
		else if(k == v.end()) cout << n << endl;
		else cout << k-v.begin() << endl;
	}
}