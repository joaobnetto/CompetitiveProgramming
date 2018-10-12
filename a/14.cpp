#include <bits/stdc++.h>
#define BLACK 0
#define RED 1
#define BLUE 2
#define R 3
using namespace std;

vector < int > v[110];
int time1 = 0, time2 = 0;

int color[110] = {0};

bitset < 110 > b;

int bicolor(int i){
	if(v[i].size() == 0) return 0;
	queue < int > q;
	q.push(i);
	int count = 0;
	if(time1 < time2) color[i] = RED;
	else color[i] = BLUE;
	while(!q.empty()){
		int j = q.front();
		q.pop();
		if(b[j]) continue;
		b[j] = 1;
		for(int k = 0;k < v[j].size();++k){
			// cout << v[j][k] << " " << j << endl;
			if(color[v[j][k]] == color[j]){
				if(!b[v[j][k]]) count++;
				color[j] = R;
			}
			else if(color[j] == RED && color[v[j][k]] == BLACK) color[v[j][k]] = BLUE;
			else if(color[v[j][k]] == BLACK) color[v[j][k]] = RED;
			if(b[v[j][k]]) continue;
			q.push(v[j][k]);
		}
		if(color[j] == RED) time1++;
		else if(color[j] == BLUE) time2++;
	}
	cout << time1 << " " << time2 << endl;
	return count;
}

int main(){
	int n, m, x, y;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int count = 0;
	for(int i = 1;i <= n;++i){
		if(color[i] == BLACK) count += bicolor(i);
	}
	for(int i = 1;i <= n;++i){
		cout << color[i] << " ";
	}
	cout << endl;
	for(int i = 1;i <= n;i++){
		if(color[i] == BLACK){
			if(time1 < time2) time1++;
			else time2++;
		}
	}
	cout << time1 <<" " << time2 << endl;
	if(time1 == time2) cout << count << endl;
	else cout << count + fabs(time1-time2) << endl;
}