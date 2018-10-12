#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int soma = 0, i = 0;
	while(soma < n){
		i++;
		soma += i;
	}
	cout << i << endl;
}