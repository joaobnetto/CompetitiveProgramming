#include <bits/stdc++.h>

using namespace std;

int n;
vector < char > v[26];

void floodfill(int i, int j){
	if(i >= n || j >= n || i < 0 || j < 0) return;
	if(v[i][j] == '0' || v[i][j] == '-') return;
	v[i][j] = '-';
	floodfill(i+1, j);
	floodfill(i+1, j-1);
	floodfill(i+1, j+1);
	floodfill(i, j+1);
	floodfill(i, j-1);
	floodfill(i-1, j);
	floodfill(i-1, j+1);
	floodfill(i-1, j-1);
}

int main(){
	char x;
	int ci = 1;
	while(cin >> n){
		for(int i = 0;i < 26;i++){
			v[i].clear();
		}
		int count = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cin >> x;
				v[i].push_back(x);
				// cout << x;
			}
			// cout << endl;
		}
		// cout << "OI";
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if(v[i][j] == '1'){
					count++;
					floodfill(i,j);
				}	
			}
		}
		cout << "Image number " << ci << " contains " << count << " war eagles." << endl;
		ci++;
	}
}