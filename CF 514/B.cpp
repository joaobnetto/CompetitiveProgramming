#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	char v[1010][1010], og[1010][1010];
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			cin >> og[i][j];
			v[i][j] = '.';
		}
	}
	for(int i = 1;i < n-1;++i){
		for(int j = 1;j < m-1;++j){
			if(og[i-1][j-1] == '#' && og[i-1][j] == '#' && og[i-1][j+1] == '#'
				&& og[i][j-1] == '#' && og[i][j+1] == '#'
				&& og[i+1][j-1] == '#' && og[i+1][j] == '#' && og[i+1][j+1] == '#'){
				// cout << i << " " << j << endl;
				for(int k = i-1;k <= i+1;++k){
					for(int l = j-1;l <= j+1;++l){
						if(k == i && j == l) continue;
						// cout << k << " " << l << endl;
						v[k][l] = '#';
					}
				}
				// cout << endl;
			}
		}
	}
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			if(v[i][j] != og[i][j]){
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
}