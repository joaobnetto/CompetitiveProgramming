#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i = 2;i < s.size();++i){
		if(s[i-1] == s[i] || s[i-1] == s[i]){
			cout << "S\n";
			return 0;
		}
	}
	cout << "N\n";
}