#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector < int > v(n), v1;
	for(int i = 0;i < n;++i){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int j = 0;
	while(j < v.size() && v[j] < 0 && k){
		v[j++] *= -1;
		k--;
	}
	sort(v.begin(), v.end());
	while(k){
		v[0] *= -1;
		k--;
	}
	int sum = 0;
	for(int i = 0;i < v.size();++i) sum += v[i];
	cout << sum << endl;
}