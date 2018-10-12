#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0;i < s.size()-1;++i){
		if(s[i] == 'V' && s[i+1] == 'K'){
			count++;
			s[i] = s[i+1] = '-';
		}
	}
	// cout << s << endl;
	for(int i = 0;i < s.size()-1;++i){
		if(s[i] == s[i+1] && s[i] != '-'){
			count++;
			break;
		}
	}
	cout << count << endl;
}