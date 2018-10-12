#include <bits/stdc++.h>

using namespace std;

char v[10][10];
char k[7] = {'I', 'E', 'H', 'O', 'V', 'A', '#'};
int n, m;

void bfs(int i, int j, int l){
	if(v[i][j] == '#') return;
	// cout << i << " " << j << " " << k[l] << '\n';
	if(l > 0) cout << " ";
	if(j-1 >= 0 && v[i][j-1] == k[l]){
		cout << "left";
		bfs(i,j-1,l+1);
	}
	else if(i-1 >= 0 && v[i-1][j] == k[l]){
		cout << "forth";
		bfs(i-1,j,l+1);
	}
	else if(j+1 < m && v[i][j+1] == k[l]){
		cout << "right";
		bfs(i, j+1, l+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int stx, sty;
		cin >> n >> m;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cin >> v[i][j];
				if(v[i][j] == '@'){
					stx = i;
					sty = j;
				}
			}
		}
		bfs(stx, sty, 0);
		cout << endl;
	}
}