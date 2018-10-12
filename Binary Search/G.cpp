#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	scanf("%d", &k);
	string s;
	int count = 0, soma, tmp;
	for(int i = 19;i <= 10800100;i++){
		soma = 0; tmp = i;
		while(tmp){
			soma += (tmp%10);
			tmp /= 10;
		}
		if(soma == 10) {
			count++;
			if(count == k){
				printf("%d\n", i);
				return 0;
			}
		}
	}
}