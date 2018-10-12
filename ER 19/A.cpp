#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

int sp[MAXN];
bitset < MAXN+10 > b;

int main(){
	int n, k;
	sp[0] = 0;
	sp[1] = 1;
	// Marco todos os multiplos de 2 como o menor fator
	// Que é 2.
	for(int i = 2;i <= MAXN;i += 2) sp[i] = 2;
	// Itero por todos os impares(Pois pares não são primos).
	for(long long i = 3;i <= MAXN;i += 2){
		// Se não for primo continuo.
		if(b[i]) continue;
		sp[i] = i;
		// Se não itero de i até j*i, marcando todos os multiplos desse primo		
		for(long long j = i;j*i <= MAXN;j += 2){
			// Se esse numero não tiver um fator menor que i, então ele é multiplo.
			// cout << j*i << endl;
			if(!b[j*i]){
			// 	// Marco e coloco seu menor fator.
				b[j*i] = true;
				sp[j*i] = i;
			}
		}
	}
	cin >> n >> k;
	queue < int > q;
	while(n > 1){
		// cout << n << " " << sp[n] << endl;
		q.push(sp[n]);
		n /= sp[n];
	}
	if(q.size() >= k){
		int tmp = 1;
		while(q.size() >= k){
			tmp *= q.front();
			q.pop();
		}
		cout << tmp << " ";
		while(!q.empty()){
			cout << q.front() << " ";
			q.pop();
		}
		cout << "\n";
	}
	else cout << "-1\n";
}