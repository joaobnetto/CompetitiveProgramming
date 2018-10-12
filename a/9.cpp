#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, soma = 0;
	cin >> n;
	vector < int > v(n);
	for(int i = 0;i < n;++i){
		cin >> v[i];
		soma += v[i];
	}
	sort(v.begin(), v.end());
	int soma1 = 0;
	for(int i = v.size()-1;i >= 0;i--){
		soma -= v[i];
		soma1 += v[i];
		if(soma1 > soma){
			cout << v.size()-i << endl;
			return 0;
		}
	}
}