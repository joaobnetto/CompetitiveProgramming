#include <bits/stdc++.h>
#define MAX 15000000

using namespace std;

int gcd;

bitset < MAX > b;
vector < int > primes;
int divisores[1000010];

int resposta = 0;

void fatorar(int x){
	if(x == 1) return;
	bool flag;
	for(int i = 0;i < primes.size();i++){
		flag = true;
		while(x % primes[i] == 0){
			// cout << x << endl;
			if(flag){
				divisores[i]++;
				// cout << x << " " << primes[i]<< endl;
				resposta = max(divisores[i], resposta);
				flag = false;
			}
			x /= primes[i];
		}
		if(x == 1) return;
		if(primes[i]*primes[i] > x){
			auto k = lower_bound(primes.begin(), primes.end(), x);
			int tmp = k-primes.begin();
			divisores[tmp]++;
			resposta = max(divisores[tmp], resposta);
			return;
		}
	}
}

int main(){
	for(int i = 2;i <= MAX;++i){
		if(b[i]) continue;
		primes.push_back(i);
		for(int j = i+i;j <= MAX;j += i) b[j] = 1;
	}
	// cout << primes.size() << endl;
	memset(divisores, 0 , sizeof(divisores));
	int n;
	scanf("%d", &n);
	vector < int > v(n);
	bool noOne = true;
	cin >> v[0];
	gcd = v[0];
	for(int i = 1;i < n;i++){
		scanf("%d", &v[i]);
		gcd = __gcd(v[i], gcd);
	}
	for(int i = 0;i < n;i++){
		v[i] /= gcd;
		if(v[i] != 1){
			noOne = false;
		}
	}
	if(noOne){
		printf("-1\n");
		return 0;
	}
	for(int i = 0;i < n;i++){
		// v[i] /= gcd;
		fatorar(v[i]);
	}
	assert(resposta < n);
	printf("%d\n", n-resposta);
}