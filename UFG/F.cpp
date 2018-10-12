#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n, x, sum = 0;
	cin >> n;
	for(int i = 0;i < n;++i){
		cin >> x;
		if(x % 2 == 1) sum += x; 
	}
	if(sum % 2) cout << "S\n";
	else cout << "N\n";
}