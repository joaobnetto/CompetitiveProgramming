#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	stack < char > q;
	string final = "";
	int v[110];
	memset(v, 0, sizeof(v));
	for(int i = 0;i < s.size();i++){
		v[s[i]-'a']++;
	}
	// cout << v[0] << endl;
	for(int i = 0;i < s.size();i++){
		int id;
		q.push(s[i]);
		bool flag = false;
		while(!q.empty()){
			flag = false;
			id = q.top()-'a';
			for(int j = 0;j < id;++j){
				if(v[j]){
					flag = true;
				}
			}
			if(id == s[i]-'a') v[id]--;
			if(flag) break;
			final += q.top();
			q.pop();
		}
	}
	while(!q.empty()) {
		final += q.top();
		q.pop();
	}
	cout << final << endl;
}