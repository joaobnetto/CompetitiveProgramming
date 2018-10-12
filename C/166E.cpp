#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long int resposta(int n){
	if(n == 0) return 1;
	if(n == 1) return 3;
	long long int tmp = resposta(n/2);
	tmp = (tmp*tmp) % mod;
	if(n%2) tmp = (tmp*3) % mod;
	return tmp;
}

int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 0 << endl;
		return 0; 
	}
	else if(n == 2){
		cout << 3 << endl;
		return 0;
	}
	else if(n == 3){
		cout << 6 << endl;
		return 0;
	}
	cout << resposta(n-3) * 6 + 3<< endl;
}