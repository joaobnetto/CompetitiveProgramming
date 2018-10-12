#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, r, x, y;
	cin >> n >> r;
	vector < pair < int , int > > v;
	for(int i = 0;i < n;++i){
		cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end());
	int count = 0;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < v[i].second;j++){
			r -= v[i].first;
			if(r < 0){
				break;
			}
			count++;
		}
		if(r < 0) break;
	}
	cout << count << endl;
	return 0;
}