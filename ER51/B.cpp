#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long long l, r, in, num, quant;
	cin >> l >> r;
	cout << "YES\n";
	for(long long int i = l; i <= r;i +=2){
		cout << i << " " << i+1 << endl;
	}
}