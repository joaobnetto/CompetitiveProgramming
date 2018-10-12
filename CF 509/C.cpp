#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, m ,d, x;
	scanf("%d %d %d", &n ,&m ,&d);
	vector < int > v, o;
	for(int i = 0;i < n;i++){
		scanf("%d", &x);
		v.push_back(x);
		o.push_back(x);
	}
	sort(v.begin(), v.end());
	int dd = 1;
	unordered_map < int , int > ma;
	priority_queue < int , vector < int > , greater <int > > pq;
	pq.push(v[0]);
	ma[v[0]] = dd;
	dd++;
	for(int i = 1;i < n;i++){
		int tmp = pq.top();
		if(v[i] - d - 1 >= tmp){
			pq.pop();
			ma[v[i]] = ma[tmp];
		}
		else{
			ma[v[i]] = dd;
			dd++;
		}
		pq.push(v[i]);
	}
	cout << dd-1 << endl;
	for(int i = 0;i < o.size();i++){
		printf("%d ", ma[o[i]]);
	}
	printf("\n");
}