#include <bits/stdc++.h>
#define BLACK 0
#define BLUE 1
#define RED 2

using namespace std;

int ver[100010];
bitset < 100010 > vis;
vector < int > b, r;
vector < int > v[100010];

bool bfs(int i){
	queue < int > q;
	q.push(i);
	if(v[i].size() == 0) return 0;
	ver[i] = RED;
	vis[i] = 1;
	r.push_back(i);
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		for(int j = 0;j < v[tmp].size();j++){
			int k = v[tmp][j];
			if(ver[k] == ver[tmp]){
				return 1;
			}
			if(vis[k]) continue;
			if(ver[tmp] == BLUE){
				ver[k] = RED;
				r.push_back(k);
			}
			else{
				ver[k] = BLUE;
				b.push_back(k);
			}
			q.push(k);
			vis[k] = 1;
		}
	}
	return 0;
}


int main(){
	int n, m, x, y;
	cin >> n >> m;
	memset(ver,0,sizeof(ver));
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 1; i<= n;i++){
		if(vis[i]) continue;
		if(bfs(i)){
			cout << -1 << endl;
			return 0;
		}
	}
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++){
		cout << b[i] << " ";
	}
	cout << endl << r.size() << endl;
	for(int i = 0;i < r.size();i++){
		cout << r[i] << " ";
	}
	cout << endl;

}