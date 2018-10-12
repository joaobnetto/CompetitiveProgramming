#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	string final = "";
	bool found = false;
	for(int i = 0;i < s.size()-1;i++){
		if(!found && s[i] == '0'){
			found = true;
			continue;
		}
		final += s[i];
	}
	if(found) final += s[s.size()-1];
	cout << final << endl;
}