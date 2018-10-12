#include <bits/stdc++.h>

using namespace std;

int n;

char v[110][110];

bool floodfill(int i, int j){
	
	if(i < 0 || j < 0 || i >= n || j >= n) return true;
	if(v[i][j] == '.') return true;
	
	bool noShip = true;
	if(v[i][j] == 'x'){
		noShip = false;
	}

	v[i][j] = '.';
	return floodfill(i+1,j) && floodfill(i-1,j) && floodfill(i, j+1) && floodfill(i, j-1) && noShip;
}

int main(){
	int t;
	cin >> t;
	int ci = 1;
	while(t--){
		cin >> n;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cin >> v[i][j];
			}
		}
		int count = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if(v[i][j] == '@' || v[i][j] == 'x'){
					if(!floodfill(i,j)) count++;
				}
			}
		}
		cout << "Case " << ci++ << ": " << count << endl;
	}
}