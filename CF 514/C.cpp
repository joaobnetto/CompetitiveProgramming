#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	if(n == 1){
		cout << "1\n";
		return 0;
	}
	else if(n == 2){
		cout << "1 2\n";
		return 0;
	}
	else if(n == 3){
		cout << "1 1 3\n";
		return 0;
	}
	int x;
	if(n % 2 == 0) x = n/2;
	else x = n/2+1;
	for(int i = 0;i < x;++i){
		cout << "1 ";
	}
	cout << endl;
	for(int i = 2;i <= n;i += 2){
		cout << n/i << endl;
	}
}