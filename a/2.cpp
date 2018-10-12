#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	int v[26] = {0};
	int count = 0;
	if(a.size() == b.size()) for(int i = 0;i < a.size();++i){
		if(a[i] != b[i]) count++;
	}
	if(count || a.size() != b.size()) cout << max(a.size(), b.size()) << endl;
	else cout << -1 << endl;
}