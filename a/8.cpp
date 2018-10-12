#include <bits/stdc++.h>

using namespace std;

int main(){
	bitset < 26 > b;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0;i < s.size();++i){
		if(s[i] <= 'Z' && s[i] >= 'A') b[s[i]-'A'] = 1;
		else b[s[i]-'a'] = 1;
	}
	if(b.all()){
		cout << "YES\n";
	}
	else cout << "NO\n";
}