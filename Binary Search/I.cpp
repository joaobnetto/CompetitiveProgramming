#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, k;
	string s = "";
	int min = 1;
	cin >> n >> k;
	long long int v[60];
	v[1] = 2;
	if(k % 2LL != 0){
		cout << 1 << endl;
		return 0;
	}
	for(int i = 2;i <= 50;i++){
		v[i] = 2*v[i-1];
		// cout << v[i] << " ";
	}
	long long int pi[60];
	long long int r = 0;
	for(int j = 1;j <= 50;j++){
		pi[j] = r + 1;
		r = r + 1 + r;
	}
	long long int res = 0;
	for(int j = 2;j <= 50;j++){
		if((pi[j] + k) % v[j] == 0){
			cout << j << endl;
			return 0;
		}
	}
}