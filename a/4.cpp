#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector < int > v(n);
	set < int > s;
	for(int i = 0;i < n;i++){
		cin >> v[i];
		s.insert(v[i]);
	}
	int count = 0;
	for(int i = 0;i < n;i++){
		auto j = s.lower_bound(v[i]);
		auto k = s.upper_bound(v[i]);
		if(k != s.end() && j != s.begin()){
			count++;
		}
	}
	cout << count << endl;
}