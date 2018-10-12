#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 2){
		cout << "1\n2\n";
		return 0;
	}
	else if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	set < int > s;
	bitset < 1010 > p;
	for(int i = 2; i <= n;i++){
		if(p[i] == 1) continue;
		for(int j = i+i;j <= n;j+=i) p[j] = 1;
		for(int j = i;j <= n;j *= i){
			s.insert(j);
		}
	}
	cout << s.size() << endl;
	for(auto i = s.begin();i != s.end();++i){
		cout << *i << " ";
	}
	cout << endl;
}