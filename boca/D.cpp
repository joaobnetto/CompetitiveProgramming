#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	vector < int > v;
	vector < char > symb;
	while(cin >> s && s != "#"){
		int x = 0;
		if((s[0] <= '9' && s[0] >= '0') || (s[0] <= 'C' && s[0] >= 'A')){
			int b = 1, t;
			for(int i = s.size()-1; i >= 0;i--){	
				if(s[i] == 'A') t = 10;
				else if(s[i] == 'B') t = 11;
				else if(s[i] == 'C') t = 12;
				else t = (s[i] - '0');
				x += (b*t);
				b *= 13;
			}
			v.push_back(x);
		}
		else symb.push_back(s[0]);
	}
	stack < int > r;
	r.push(v[0]);
	int tmp;
	for(int i = 0;i < symb.size();i++){
		if(symb[i] == '+'){
			r.push(v[i+1]);
			continue;
		}
		else if(symb[i] == '-'){
			r.push(v[i+1]*(-1));
			continue;
		}
		else if(symb[i] == '*'){
			tmp = r.top();
			tmp *= v[i+1];
		}
		else if(symb[i] == '/'){
			tmp = r.top();
			tmp /= v[i+1];
		}
		r.pop();
		r.push(tmp);
	}
	int res = 0;
	while(!r.empty()){
		res += r.top();
		r.pop();
	}
	cout << res << endl;
}