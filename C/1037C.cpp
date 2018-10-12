#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector < int > v;
	int zerocount;
	string s = "1000";
	while(s.size() <= 18){
		// cout << s << endl;
		v.push_back(stoll(s));
		// break;
		zerocount = 0;
		for(int i = 0;i < s.size();i++){
			if(s[i] == '0') zerocount++;
		}
		if(zerocount < 3){
			s += '0';
		}
		else if(zerocount == 3){
			for(int i = s.size()-1;i >= 0;i--){
				if(s[i] <= '8' && s[i] >= '1'){
					s[i]++;
					break;
				}
				while(i >= 0 && s[i] == '9'){
					if(i == 0){
						s += "0";
						for(int j = 0;j < s.size();j++){
							if(j == 0) s[j] = '1';
							else s[j] = '0';
						}
						break;
					}
					if(s[i-1] < '9'){
						s[i-1]++;
						s[i] = '0';
						break;
					}
					else{
						s[i] = '0';
						i--;
					}

				}
			}
		}
		else if(zerocount > 3){
			for(int i = s.size()-1;i >=0;i--){
				if(s[i] == '0'){
					s[i]++;
					zerocount--;
					break;
				}
				else if(s[i] <= '8' && s[i] >= '1'){
					s[i]++;
					break;
				}
				else if(s[i] == '9'){
					if(s[i-1] == '0') zerocount++;
					s[i-1]++;
					s[i] = '0';
				}
			}
		}
	}
	for(int i = 0;i < v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
}