#include <bits/stdc++.h>

using namespace std;

int final[110][110];
char v[110][110];
int n, m;

void floodfill(int i, int j, int d){
	if(i >= n || i < 0 || j >= m || j < 0) return;
	if(d >= final[i][j]) return;
	if(v[i][j] == '*') return;
	final[i][j] = d;
	floodfill(i+1, j, d+1);
	floodfill(i-1, j, d+1);
	floodfill(i, j+1, d+1);
	floodfill(i, j-1, d+1);
}

int main(){
	ios::sync_with_stdio(false);
	cin >> n >> m;
	cin.ignore();
	vector < pair < int , int > > p;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> v[i][j];
			final[i][j] = 1100;
			if(v[i][j] == 'P') p.push_back({i,j});
		}
	}
	for(int i = 0;i < p.size();i++){
		floodfill(p[i].first, p[i].second, 0);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(v[i][j] == '*') cout << "*";
			else if(final[i][j] == 1100) cout << ".";
			else cout << final[i][j];
		}
		cout << endl;
	}
}