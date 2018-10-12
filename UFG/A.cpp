#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n <= 2) cout << "N\n";
	else if(n % 2 == 0) cout << "S\n";
	else cout << "N\n";
}