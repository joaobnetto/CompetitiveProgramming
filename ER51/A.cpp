#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	string s;
	while(n--){
		cin >> s;
		bool a, b, c;
		char tmp;
		a = b = c = false;
		int v[3];
		memset(v, 0, sizeof(v));
		for(int i = 0;i < s.size();i++){
			if(s[i] <= 'z' && s[i] >= 'a'){
				a = true;
				v[0]++;
			}
			else if(s[i] <= 'Z' && s[i] >= 'A'){
				b = true;
				v[1]++;
			}
			else{
				c = true;
				v[2]++;
			} 
		}
		if(a && b && c){
			cout << s << endl;
			continue;
		}
		else if(a && b){
			if(v[0] > v[1]){
				tmp = 'a';
			}
			else{
				tmp = 'A';
			}
			for(int i = 0;i < s.size();i++){
				if(s[i] - tmp <= 25 && s[i] - tmp >= 0){
					s[i] = '0';
					break;
				}
			}
		}
		else if(b && c){
			if(v[1] > v[2]){
				tmp = 'A';
				for(int i = 0;i < s.size();i++){
					if(s[i] - tmp <= 25 && s[i] - tmp >= 0){
						s[i] = 'a';
						break;
					}
				}
			}
			else{
				tmp = '0';
				for(int i = 0;i < s.size();i++){
					if(s[i] - tmp <= 9 && s[i] - tmp >= 0){
						s[i] = 'a';
						break;
					}
				}

			}

		}
		else if(a && c){
			if(v[0] > v[2]){
				tmp = 'a';
			}
			else{
				tmp = '0';
			}
			for(int i = 0;i < s.size();i++){
				if(s[i] - tmp <= 25 && s[i] - tmp >= 0){
					s[i] = 'A';
					break;
				}
			}

		}
		else if(a){
			s[0] = 'A';
			s[1] = '1';
		}
		else if(b){
			s[0] = 'a';
			s[1] = '1';
		}
		else if(c){
			s[0] = 'a';
			s[1] = 'A';
		}
		cout << s << endl;
	}
}