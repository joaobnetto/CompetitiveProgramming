#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector < int > v(n);
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int x = v[0], y = v[v.size()-1];
	int j = 1, count = 0;
	for(int i = x+1;i <= y;i++){
		if(i == v[j]) j++;
		else count++;
	}
	cout << count << endl;
}