#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int m, s;
	cin >> m >> s;
	int tmp = s;
	if(m == s && s == 0){
		cout << 0 << " " << 0 << endl;
		return 0;
	}
	else if(m == 1 && s == 0){
		cout << 0 << " " << 0 << endl;
		return 0;
	}
	else if(s == 0 && m > 1){
		cout << -1 << " " << -1 << endl;
		return 0;
	}
	string s1 = "", s2;
	for(int i = 0;i < m;i++){
		for(int j = 9;j >= 0;j--){
			if(s - j >= 0){
				s1 += (j + '0');
				s -= j;
				break;
			}
		}
	}
	if(s != 0){
		cout << "-1 -1\n";
		return 0;
	}
	s2 = s1;
	reverse(s2.begin(), s2.end());
	while(s2[0] == '0'){
		s2.erase(s2.begin(), s2.begin()+1);
		s2 += '0';
	}
	for(int i = 0;i < s2.size();i++){
		for(int j = s2.size()-1;j > i;j--){
			while((s2[i] - '0') > 0 && (s2[j] - '0') < 9){
				if(i == 0 && s2[i] == '1') break; 
				s2[i]--;
				s2[j]++;
			}
			if(i == 0 && s2[i] == '1') break; 
		}
	}
	cout << s2 << " " << s1 << endl;
}