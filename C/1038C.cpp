#include <bits/stdc++.h>

using namespace std;

int v1[100010], v2[100010];

long long int resposta(int i, int j, bool player){
	if(i <= 0 && j <= 0) return 0;
	// cout << i << " " << j << endl;
	if(!player){
		if(v1[i] >= v2[j]){
			return v1[i] - resposta(i-1,j,!player);
		}
		else return -resposta(i, j-1, !player);
	}
	else{
		if(v2[j] >= v1[i]){
			return v2[j] - resposta(i, j-1, !player); 
		}
		else return -resposta(i-1, j, !player);
	}
}

int main(){
	int n;
	cin >> n;
	v1[0] = v2[0] = -INT_MAX;
	for(int i = 1;i <= n;i++){
		cin >> v1[i];
	}
	for(int i = 1;i <= n;i++){
		cin >> v2[i];
	}
	sort(v1, v1+n+1);
	sort(v2, v2+n+1);
	cout << resposta(n,n,0) << endl;
}