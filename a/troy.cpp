#include <bits/stdc++.h>
#define MAXN 100010
#define mod 1000000007

using namespace std;

int main(){
	int n, q, a, b;
	cin >> n >> q;
	long long int v[MAXN], x[MAXN], p[MAXN];
	memset(p,0,sizeof(p));
	cin >> v[1] >> v[2];
	cin >> a >> b;
	for(int i = 3;i <= MAXN;++i){
		v[i] = (a*v[i-2]+b*v[i-1])%mod;
	}
	for(int i = 1;i <= n;i++) cin >> x[i];
}