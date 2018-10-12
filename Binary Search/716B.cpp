#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int pt0 = 0, pt1 = 0;
	if(s.size() < 26){
		cout << -1 << endl;
		return 0;
	}
	set < char > let;
	int sz = 0;
	map < char , int > m;
	bool found = false;
	while(pt0 < s.size() && pt1 < s.size()){
		if(s[pt1] != '?' && let.find(s[pt1]) != let.end()){
			while(s[pt0] != s[pt1]){
				sz--;
				if(s[pt0] != '?') let.erase(s[pt0]);
				pt0++;
			}
			pt0++;
		}
		else{
			sz++;
			if(s[pt1] != '?') let.insert(s[pt1]);
		}
		if(sz == 26){
			int j = 0;
			// cout << pt0 << " " << pt1 << endl;
			for(int i = pt0;i <= pt1;i++){
				if(s[i] != '?') m[s[i]]++;
			}
			for(int i = pt0;i <= pt1;i++){
				if(s[i] == '?'){
						while(m[j+'A'] != 0) j++;
						s[i] = (j+'A');
				}
				m[s[i]]++;
			}
			found = true;
			break;
		}
		pt1++;
	}
	if(!found){
		cout << -1 << endl;
	}
	else{
		int j = 0;
		for(int i = 0;i < s.size();i++){
			if(s[i] == '?'){
				s[i] = 'A';
			}
		}
		cout << s << endl;
	}
}