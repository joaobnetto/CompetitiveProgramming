#include <bits/stdc++.h>
#define MAXN 300010
using namespace std;

vector < int > v[MAXN];
bitset < MAXN > vis;

void bfs(int x, int d){
	queue < int > q;
	q.push(x);
	vis[x] = 1;
	while(!q.empty()){
		int i = q.front();
		q.pop();
		for(int j = 0; j < v[i].size();j++){
			if(vis[v[i][j]]){
				roads++;
			}
			vis[v[i][j]] = 1;
			q.push(v[i][j]);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	int n, k, d, x, y;
	cin >> n >> k >> d;
	vector < int > p(k);
	for(int i = 0;i < k;i++){
		cin >> p[i];
	}
	for(int i = 0;i < n-1;i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 0;i < k;i++){
		bfs(p[i], d);
	}
}