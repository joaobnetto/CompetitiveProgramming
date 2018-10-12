#include <bits/stdc++.h>

using namespace std;

int tab[1010][1010];

int main(){
	ios::sync_with_stdio(0);
	int n;
	memset(tab, 0, sizeof(tab));
	cin >> n;
	int ax, ay, bx, by, cx, cy;
	cin >> ax >> ay;
	cin >> bx >> by;
	cin >> cx >> cy;
	if(bx <= ax && cx >= ax){
		cout << "NO\n";
	}
	else if(bx >= ax && cx <= ax){
		cout << "NO\n";
	}
	else if(by <= ay && cy >= ay){
		cout << "NO\n";
	}
	else if(by >= ay && cy <= ay){
		cout << "NO\n";
	}
	else cout << "YES\n";
	// for(int i = 1;i <= n;++i){
	// 	tab[i][ay] = 1;
	// 	tab[ax][i] = 1;
	// }
	// int i = ax, j = ay;
	// while(i <= n && j <= n){
	// 	tab[i++][j++] = 1;
	// }
	// i = ax, j = ay;
	// while(i <= n && j >= 1){
	// 	tab[i++][j--] = 1;
	// }
	// i = ax, j = ay;
	// while(i >= 1 && j <= n){
	// 	tab[i--][j++] = 1;
	// }
	// i = ax, j = ay;
	// while(i >= n && j >= 1){
	// 	tab[i--][j--] = 1;
	// }
	// for(int i = 1;i <= n;++i){
	// 	for(int j = 1;j <= n;++j){
	// 		cout << tab[i][j] << " \n"[j==n];
	// 	}
	// }
}