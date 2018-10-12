#include <bits/stdc++.h>
#define N 100010

using namespace std;

int BIT[N];

// Nova estrutura de dados BIT.
// Posso usar para prefix sum em O(logn)
// Mais fácil de codar que uma segment tree.

void update(int x, int val){
	for(;x <= n;x += x&-x) bit[x] += val;
}

int querie(int x){
	int soma = 0;
	for(;x > 0;x -= x&-x) soma += bit[x];
	return soma;
}

int main(){
	
}