#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

int pai[MAXN], peso[MAXN];
vector < pair < int, int > > v[MAXN];
set < pair < int , pair < int , int > > > s;
int n;

int find(int x){
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

void join(int x, int y){
	x = find(x);
	y = find(y);
	if(peso[x] > peso[y]){
		pai[y] = x;
	}
	else{
		pai[x] = y;
		if(peso[x] == peso[y]) peso[y]++;
	}
}

void mount_tree(){
	int count = 0, x, y ;
	for(auto i = s.begin(); i != s.end();++i){
		x = i->second.first; y = i->second.second;
		if(find(x) != find(y)){
			join(x,y);
			v[x].push_back({y,i->first});
			v[y].push_back({x,i->first});
			count++;
		}
		if(count == n-1) break;
	}
}

void bfs(int x){
	queue < int > q;
	q.push(x);
	bitset < MAXN > vis;
	vis[x] = 1;
	while(!q.empty()){
		int i = q.top();
		q.pop();
		for(int i = 0;i < n;i++){
			
		}
	}	
}



int main(){
	for(int i = 1; i< MAXN; i++) pai[i] = i;
	memset(peso, 0, sizeof(peso));
	int m, x, y, d;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> x >> y >> d;
		s.insert({d,{x,y}});
	}
	mount_tree();
	bfs(1);
}