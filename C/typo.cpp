#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	string res = "";
	res += s[0];
	int t = 1;
	for(int i = 1;i < s.size();i++){
		if(s[i] == s[i-1]) t++;
		else t = 1;
		if(t >= 3) continue;
		res += s[i];
	}
	bool ig = false;
	string nres = "";
	nres += res[0];
	for(int i = 1;i < res.size();i++){
		if(res[i] == res[i-1] && ig){
			ig = false;
			continue;
		}
		else if(res[i] == res[i-1]){
			ig = true;
			nres += res[i];
			i++;
		}
		else ig = false;
		if(i < res.size()) nres += res[i];
	}
	cout << nres << endl;
}