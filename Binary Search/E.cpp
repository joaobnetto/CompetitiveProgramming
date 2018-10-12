#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x;
	vector < int > v;
	long long int soma = 0;
	// Calculo a soma total do bagui
	for(int i = 1;i <= n;i++){
		cin >> x;
		v.push_back(x);
		soma += x;
	}
	int mk[1000010];
	memset(mk, 0, sizeof(mk));
	if(soma % 3 != 0){
		cout << 0 << endl;
	}
	else{
		soma /= 3;
		long long int ss = 0;

		// Vejo a quantidade de segmentos de i até n que são iguais a soma.
		// Se não houver mais de um, não há variações diferentes.
		for(int i = n-1;i >= 0;i--){
			ss += v[i];
			if(ss == soma){
				mk[i] = 1;
			}
		}
		// Obtenho a soma dos segmentos.
		for(int i = n-2;i >= 0;i--){
			mk[i] += mk[i+1];
		}
		long long ans = 0;
		ss = 0;
		// Vou até n-3 porque no maximo pode ter o segmento de i ate n-3, n-2, n-1 nos segmentos
		// Se o segmento de i até n for igual a S/3, tenho que o total de segmentos que terminam aqui
		// é igual o total de segmentos de i+2 até n;
		for(int i = 0;i+2 < n;i++){
			ss += v[i];
			if(ss == soma){
				ans += mk[i+2];
			}
		}
		cout << ans << endl;
	}
}