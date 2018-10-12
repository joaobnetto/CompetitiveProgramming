#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	vector < int > v(n+10), pos(n+10);
	string s = "";
	map < int , int > m;
	for(int i = 1;i <= n;++i){
		cin >> v[i];
		s += '.';
		pos[v[i]] = i; 
		if(v[i] == 1) s[i-1] = 'A';
	}
	for(int i = n;i > 1;--i){
		if(pos[i] - i < 1 && i + pos[i] > n){
			// cout << i << endl;
			s[pos[i]-1] = 'B';
			continue;
		}
		bool flag = false;
		for(int j = pos[i]-i; j >= 1; j -= i){
			if(s[j-1] == 'B'){
				flag = true;
				break;
			}
		}
		for(int j = i + pos[i]; j <= n; j += i){
			if(s[j-1] == 'B'){
				flag = true;
				break;
			}
		}
		if(flag){
			s[pos[i]-1] = 'A';
		}
		else s[pos[i]-1] = 'B';
		
	}
	// cout << "OLA\n";
	cout << s << endl;
}