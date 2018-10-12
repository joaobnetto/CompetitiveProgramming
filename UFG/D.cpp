#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	double res = 1;
	for(int i = 0;i < n/2;++i){
		res *= (6.0/36);
	}
	res *= 100;
	printf("%.2lf\n", res);
}