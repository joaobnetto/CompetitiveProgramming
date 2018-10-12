#include <bits/stdc++.h>

using namespace std;

long long int pref[200010], vx[200010], vy[200010];

int main(){
	ios::sync_with_stdio(false);
	int n, h;
	long long int x, y;
	cin >> n >> h;
	pref[0] = 0;
	// Calculo a soma dos segmentos até i, o inicio e o fim de cada segmento.
	for(int i = 0;i < n;i++){
		cin >> x >> y;
		pref[i+1] = pref[i] + (y-x);
		vx[i] = x;  
		vy[i] = y;
	}
	vx[n] = vy[n] = LLONG_MAX;
	// Faco uma busca binaria, com inicio em vx[i] e final em 10e11
	long long int start, mid, end, resposta = -LLONG_MAX;
	for(int i = 0;i < n;i++){
		start = vx[i];
		end = 10e11;
		long long resposta2 = vx[i];
		while(start <= end){
			// Calculo o mid e procuro onde ele se encaixa no vetor.
			mid = (start+end)/2;
			auto k = lower_bound(vy, vy+n, mid);
			// Pego o indice do vetor.
			int t1 = k-vy;
			// cout << t1 << " " << vx[t1] << endl;
			// break;

			// Calculo a funcao com base em f(x) = h-(mid-vx[i]) + sum(x,y);
			// Onde sum é a soma do segmento x,y.
			// O max é no caso de o planador cair no meio de um vento, adiciono ele a contagem.
			long long tmp = (h - (mid-vx[i])) + pref[t1] - (i == 0 ? 0 : pref[i]) + max(0LL, mid-vx[t1]);
			// Se eu ainda puder mais incremento
			if(tmp > 0){
				start = mid+1;
			}

			// Se não minha função diminui.
			else if(tmp <= 0){
				end = mid-1;
				if (tmp == 0)
					resposta2 = mid;
			}
		}
		// Pego a maior resposta.
		resposta = max(resposta2-vx[i], resposta);
	}
	cout << resposta << endl;
}