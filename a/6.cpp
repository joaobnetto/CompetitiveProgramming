#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x = 0;
	string s;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		if(s[1] == '+' || s[0] == '+' || s[2] == '+') x++;
		else x--;
	}
	cout << x << endl;
}