#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int v[30];
	memset(v, 0, sizeof(v));
	if(n == 1){
		cout << "Yes\n";
		return 0;
	}
	for(int i = 0;i < s.size();i++){
		v[s[i]-'a']++;
	}
	bool flag = false;
	for(int i = 0;i < 26;i++){
		if(v[i] > 1) flag = true;
	}
	if(flag) cout << "Yes\n";
	else cout << "No\n";

}