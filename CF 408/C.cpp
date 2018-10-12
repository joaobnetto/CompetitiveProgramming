#include <bits/stdc++.h>
#define MAXN 300010

using namespace std;
vector < int > v[MAXN];

int main(){
	int n, x, y;
	long long resposta = INT_MAX;
	scanf("%d", &n);
	map < int , int > m;
	vector < int > a(n+1);
	for(int i = 1;i <= n;i++){
		scanf("%d", &a[i]);
		m[a[i]+2]++;
	}
	for(int i = 0;i < n-1;i++){
		scanf("%d %d", &x, &y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 1;i <= n;i++){
		m[a[i]+2]--;
		m[a[i]]++;
		for(int j = 0;j < v[i].size();++j){
			m[a[v[i][j]]+2]--;
			m[a[v[i][j]]+1]++;
		}

		auto k = m.end();
		k--;
		bool flag = false;
		for(;k != m.begin();--k){
			// cout << k->first << endl;
			if(k->second != 0){
				resposta = min(resposta, (long long)k->first);
				flag = true;
				break;
			}
		}
		if(!flag){
			if(k->second != 0){
				resposta = min(resposta, (long long)k->first);
			}
		}
		m[a[i]+2]++;
		m[a[i]]--;
		for(int j = 0;j < v[i].size();++j){
			m[a[v[i][j]]+2]++;
			m[a[v[i][j]]+1]--;
		}
	}
	printf("%lld\n", resposta);
}